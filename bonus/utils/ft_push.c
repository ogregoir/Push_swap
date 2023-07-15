/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:07:08 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:43:43 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_push(t_list **a, t_list **b)
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
