/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:51:07 by ogregoir          #+#    #+#             */
/*   Updated: 2023/04/22 17:12:43 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

t_list	*parsing(char **argv, int argc);
int		main(int argc, char **argv);
void	ft_indexage(t_list	**lst);
void	afficheindex(t_list	*liste);
void	afficherListe(t_list *liste);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_smallest(t_list	**lst);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rra(t_list **a);
void	ft_rrb(t_list **b);
t_list	*bigestvalue(t_list **lst);
int		position(t_list **lst, t_list *big);
void	doublons(t_list **list);
void	algo_choice(t_list **a, t_list **b);
void	already_sorted(t_list **list);
void	only_number(char **str, int j);
void	algo(t_list **a, t_list **b, int limit);
void	overflow(char **str, int j);
void	ft_error_code(void);

#endif
