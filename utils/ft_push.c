/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:07:08 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:42:49 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*b == NULL)
		return ;
	if (*a != NULL)
	{
		temp = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = temp;
	}
	else
	{
		temp = (*b)->next;
		(*b)->next = NULL;
		*a = *b;
		*b = temp;
	}
}

void	ft_pa(t_list **a, t_list **b)
{
	ft_push(a, b);
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **a, t_list **b)
{
	ft_push(b, a);
	write(1, "pb\n", 3);
}
