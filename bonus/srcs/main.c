/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:35:02 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:49:37 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static int	already_sorted2(t_list **list)
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
				return (1);
		}
		else
			break ;
	}
	return (0);
}

static void	ft_instructions_suite(t_list **lista, t_list **listb, char *line)
{
	if (strcmp(line, "rra\n") == 0)
		ft_rotate_reverse(lista);
	else if (strcmp(line, "rrb\n") == 0)
		ft_rotate_reverse(listb);
	else if (strcmp(line, "rrr\n") == 0)
	{
		ft_rotate_reverse(lista);
		ft_rotate_reverse(listb);
	}
	else
	{
		write(2, "ERROR\n", 6);
		exit (EXIT_FAILURE);
	}
}

static void	ft_instructions(t_list **lista, t_list **listb, char *line)
{
	if (strcmp(line, "sa\n") == 0)
		ft_swap(lista);
	else if (strcmp(line, "sb\n") == 0)
		ft_swap(listb);
	else if (strcmp(line, "ss\n") == 0)
	{
		ft_swap(lista);
		ft_swap(listb);
	}
	else if (strcmp(line, "pa\n") == 0)
		ft_push(lista, listb);
	else if (strcmp(line, "pb\n") == 0)
		ft_push(lista, listb);
	else if (strcmp(line, "ra\n") == 0)
		ft_rotate(lista);
	else if (strcmp(line, "rb\n") == 0)
		ft_rotate(listb);
	else if (strcmp(line, "rr\n") == 0)
	{
		ft_rotate(lista);
		ft_rotate(listb);
	}
	else
		ft_instructions_suite(lista, listb, line);
}

int	main(int argc, char **argv)
{
	char	*line;
	t_list	*lista;
	t_list	*listb;

	lista = parsing(argv, argc);
	listb = NULL;
	doublons(&lista);
	line = get_next_line(0);
	while (line)
	{	
		ft_instructions(&lista, &listb, line);
		free (line);
		line = get_next_line(0);
	}
	if ((listb == NULL) && (already_sorted2(&lista) == 1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
