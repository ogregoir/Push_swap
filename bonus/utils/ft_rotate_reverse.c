/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:52:25 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:44:22 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rotate_reverse(t_list **i)
{
	t_list	*temp;
	int		k;
	int		j;
	t_list	*newone;

	if ((*i) == NULL)
		return ;
	k = ft_lstsize(*i);
	temp = (*i);
	newone = ft_lstlast(*i);
	j = 2;
	if (!i)
		return ;
	while (j < k)
	{
		temp = temp->next;
		j++;
	}	
	temp->next = NULL;
	temp = (*i);
	ft_lstadd_front(i, newone);
}
