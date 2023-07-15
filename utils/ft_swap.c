/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:10:52 by ogregoir          #+#    #+#             */
/*   Updated: 2023/04/25 14:00:13 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(t_list **i)
{
	t_list	*temp;

	if (!*i)
		return ;
	temp = (*i)->next;
	(*i)->next = (*i)->next->next;
	temp->next = (*i);
	(*i) = temp;
}

void	ft_sa(t_list **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}
