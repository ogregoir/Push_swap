/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:09:24 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:54:17 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_list
{
	struct t_list	*next;
	int				content;
	int				index;
}	t_list;

int		ft_atoi(char *str);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memset(void *ptr, int value, size_t count);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *c, int fd);
char	*ft_strchr(char *str, char s);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strnstr(const char *hs, const char *n, size_t len);
char	*ft_strrchr(const char *str, int s);
char	*ft_strtrim(char *s1, char *set);
char	*ft_substr(char *s, int start, int len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
