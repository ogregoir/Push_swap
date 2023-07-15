/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:53:32 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 17:06:24 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	addcontent(t_list *list, int number)
{
	t_list	*new;
	t_list	*temp;

	new = malloc(sizeof(new));
	if (list == NULL || new == NULL)
		return ;
	new->content = number;
	new->index = 0;
	new->next = NULL;
	if (list->next != NULL)
	{
		temp = list->next;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		list->next = new;
}

static t_list	*verif(char **argv, int r)
{
	t_list	*list;
	int		i;
	int		j;

	list = NULL;
	if (argv[r])
	{
		i = ft_atoi(argv[r]);
		list = ft_lstnew(i);
		j = r + 1;
		while (argv[j])
		{
			i = ft_atoi(argv[j]);
			addcontent(list, i);
			j++;
		}
	}
	return (list);
}

t_list	*parsing(char **argv, int argc)
{
	t_list	*list;
	char	**str;

	(void) argc;
	str = NULL;
	if (!argv[2])
	{
		str = ft_split(argv[1], 32);
		overflow(str, 0);
		only_number(str, 0);
		list = verif(str, 0);
	}
	else
	{
		list = verif(argv, 1);
		overflow(argv, 1);
		only_number(argv, 1);
	}
	return (list);
}
