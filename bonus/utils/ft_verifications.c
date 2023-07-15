/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifications.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:39:10 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:17 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	ft_error_code(void)
{
	write(2, "ERROR\n", 6);
	exit(EXIT_FAILURE);
}

void	only_number(char **str, int j)
{
	int	i;

	i = 0;
	if (str[j][i] == 45 || str[j][i] == 43)
		i++;
	while (str[j])
	{
		while (str[j][i])
		{
			if (str[j][i] <= 47 || str[j][i] >= 59)
				ft_error_code();
			i++;
		}
		i = 0;
		j++;
	}
}

void	already_sorted(t_list **list)
{
	t_list	*temp;
	t_list	*new;

	temp = (*list);
	new = (*list)->next;
	while (new)
	{
		if (new->content > temp->content)
		{
			new = new->next;
			temp = temp->next;
			if (new == NULL)
				exit(EXIT_SUCCESS);
		}
		else
			break ;
	}	
}

void	overflow(char **str, int j)
{
	int		i;
	int		size;

	while (str[j])
	{
		i = 0;
		while (str[j][i] == 43 || str[j][i] == 45 || str[j][i] == 48)
			i++;
		size = ft_strlen(str[j] + i);
		if (size == 10)
		{
			if (str[j][0] == 45)
			{	
				if (ft_strcmp(&(str[j][i]), "2147483649") >= 0)
					ft_error_code();
			}
			else
				if (ft_strcmp(&(str[j][i]), "2147483648") >= 0)
					ft_error_code();
		}
		else if (size > 10)
			ft_error_code();
		j++;
	}
}

void	doublons(t_list **list)
{
	t_list	*temp;
	t_list	*new;	
	int		i;

	temp = (*list);
	new = (*list);
	i = 0;
	while (new)
	{
		while (temp != NULL)
		{
			if (new->content == temp->content)
			{
				i++;
				if (i > 1)
					ft_error_code();
				temp = temp->next;
			}
			else
				temp = temp->next;
		}
		i = 0;
		temp = (*list);
		new = new->next;
	}	
}
