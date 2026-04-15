/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 18:26:36 by srosu            #+#    #+#              */
/*   Updated: 2026/04/01 18:30:27 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
		i++;
	if ((unsigned char)c == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
