/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:02:16 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:01:33 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_smallest(t_list	**lst)
{
	t_list	*new;
	t_list	*temp;
	int		i;

	temp = NULL;
	new = (*lst);
	i = 0;
	while (new)
	{
		if (new->index == 0 && (i == 0 || temp->content > new->content))
		{
			temp = new;
			i = 1;
		}
		new = new->next;
	}
	return (temp);
}

void	ft_indexage(t_list **list)
{
	t_list	*temp;
	int		i;

	i = 1;
	temp = ft_smallest(list);
	while (temp)
	{
		temp->index = i;
		temp = ft_smallest(list);
		i++;
	}
}
