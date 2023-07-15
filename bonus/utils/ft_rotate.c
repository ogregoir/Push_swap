/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:31:57 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:44:07 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rotate(t_list **i)
{
	t_list	*temp;

	if (!(*i))
		return ;
	temp = (*i);
	(*i) = temp->next;
	temp->next = NULL;
	ft_lstadd_back(i, temp);
}
