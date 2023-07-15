/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:08:44 by ogregoir          #+#    #+#             */
/*   Updated: 2023/05/04 16:52:30 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char s)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s)
			return (str + i);
		i++;
	}
	if (s == 0)
		return (str + ft_strlen(str));
	return (0);
}
