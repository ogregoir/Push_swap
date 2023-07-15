/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:56:13 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 17:04:26 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
void	afficheindex(t_list	*liste)
{
	t_list *temp;

	temp = liste;
	while (temp)
	{
		printf("%d -> ", temp->index);
		temp = temp->next;
	}
}

void afficherListe(t_list *liste)
{
	t_list *actuel;

    if (liste == NULL)
    {
        return;
    }

	actuel = liste;
    while (actuel != NULL)
    {
        printf("%d -> ", actuel->content);
        actuel = actuel->next;
    }
    printf("NULL\n");
}
*/

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		i;

	i = 1;
	if (argc < 2)
		ft_error_code();
	list_a = parsing(argv, argc);
	list_b = NULL;
	if (list_a == NULL)
		write(2, "I'm NULL", 8);
	ft_indexage(&list_a);
	doublons(&list_a);
	already_sorted(&list_a);
	algo_choice(&list_a, &list_b);
	return (0);
}
