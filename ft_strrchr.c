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
	size_t	i;
	char	*str;

	i = ft_strlen(s);
	str = (char *) s;
	while (i > 0)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i--;
	}
	if (str[0] == (unsigned char) c)
		return (&str[i]);
	return (NULL);
}
