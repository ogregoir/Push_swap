/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:40:34 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:01:20 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_algo_3(t_list **a)
{
	t_list	*big;

	big = bigestvalue(a);
	if (big->index == (*a)->index)
	{
		ft_ra(a);
		if ((*a)->index > (*a)->next->index)
			ft_sa(a);
	}
	else if (big->index == (*a)->next->index)
	{
		ft_rra(a);
		if ((*a)->index > (*a)->next->index)
			ft_sa(a);
	}
	else if (big->index == (*a)->next->next->index)
	{
		if ((*a)->index > ((*a)->next->index))
			ft_sa(a);
	}
}

static void	ft_algo_5(t_list **a, t_list **b)
{
	t_list	*big;
	int		pos;
	int		i;

	big = bigestvalue(a);
	while ((*a)->next)
	{
		if (big->index == (*a)->index)
			ft_ra(a);
		ft_pb(a, b);
	}
	while ((*b) != NULL)
	{	
		big = bigestvalue(b);
		pos = position(b, big);
		i = ft_lstsize(*b);
		while (pos < i && big->index != (*b)->index)
			ft_rb(b);
		while (pos >= i && big->index != (*b)->index)
			ft_rrb(b);
		ft_pa(a, b);
	}
}

void	algo_choice(t_list **a, t_list **b)
{
	int		i;
	t_list	*big;

	big = bigestvalue(a);
	i = ft_lstsize(*a);
	if (big->index == 2)
	{
		if (big->index > (*a)->index)
			ft_sa(a);
	}
	if (i == 1)
		exit(EXIT_SUCCESS);
	if (i <= 3)
		ft_algo_3(a);
	else if (i <= 5)
		ft_algo_5(a, b);
	else if (i <= 100)
		algo(a, b, 20);
	else if (i > 100)
		algo(a, b, 35);
	doublons(a);
}
