/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:31:57 by ogregoir          #+#    #+#             */
/*   Updated: 2023/04/25 13:59:04 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(t_list **i)
{
	t_list	*temp;

	if (!i)
		return ;
	temp = (*i);
	(*i) = temp->next;
	temp->next = NULL;
	ft_lstadd_back(i, temp);
}

void	ft_ra(t_list **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}
