/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:11:21 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:51:15 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

t_list	*parsing(char **argv, int argc);
int		main(int argc, char **argv);
void	afficheindex(t_list	*liste);
void	afficherListe(t_list *liste);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_smallest(t_list	**lst);
void	ft_swap(t_list **i);
void	ft_push(t_list **a, t_list **b);
void	ft_rotate(t_list **i);
void	ft_rotate_reverse(t_list **i);
t_list	*bigestvalue(t_list **lst);
int		position(t_list **lst, t_list *big);
void	doublons(t_list **list);
void	already_sorted(t_list **list);
void	only_number(char **str, int j);
void	overflow(char **str, int j);
char	*get_next_line(int fd);
char	*nextbuf(char *buf);
char	*ft_get_line(char *buf);
char	*get_buf(int fd, char *buf);
void	already_sorted(t_list **list);

#endif
