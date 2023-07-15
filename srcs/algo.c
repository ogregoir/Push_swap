/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:51:54 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:00:51 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*small_lst(t_list **lst)
{
	int		i;
	t_list	*temp;
	t_list	*new;

	new = (*lst)->next;
	i = 0;
	temp = (*lst);
	while (new)
	{
		if (new->index < temp->index)
			temp = new;
		new = new->next;
	}
	return (temp);
}

int	position(t_list **lst, t_list *big)
{
	t_list	*temp;
	int		pos;

	temp = (*lst);
	pos = 1;
	while (temp)
	{
		if (big->index == temp->index)
			return (pos);
		pos++;
		temp = temp->next;
	}
	return (pos);
}

t_list	*bigestvalue(t_list **lst)
{
	t_list	*temp;
	t_list	*new;

	new = (*lst)->next;
	temp = (*lst);
	while (new)
	{
		if (new->index > temp->index)
			temp = new;
		new = new->next;
	}
	return (temp);
}

static void	mid_tri(t_list	**a, t_list **b)
{
	t_list	*big;
	int		pos;
	int		i;

	while ((*b) != NULL)
	{	
		big = bigestvalue(b);
		pos = position(b, big);
		i = ft_lstsize(*b);
		while (pos < (i / 2) && big->index != (*b)->index)
			ft_rb(b);
		while (pos >= (i / 2) && big->index != (*b)->index)
			ft_rrb(b);
		ft_pa(a, b);
	}
}

void	algo(t_list **a, t_list **b, int limit)
{
	while (*a)
	{
		if ((*a)->index < limit)
		{
			ft_pb(a, b);
			limit += 1;
			if ((*b)->index > ft_lstsize(*b))
				ft_rb(b);
		}
		else
			ft_ra(a);
	}
	mid_tri(a, b);
}
