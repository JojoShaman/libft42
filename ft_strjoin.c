/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 21:29:35 by srosu            #+#    #+#              */
/*   Updated: 2026/04/01 21:39:58 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	cpy = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(*cpy));
	if (!cpy)
		return (NULL);
	ptr = cpy;
	while (*s1)
	{
		*cpy = *s1;
		cpy++;
		s1++;
	}
	while (*s2)
	{
		*cpy = *s2;
		cpy++;
		s2++;
	}
	*cpy = '\0';
	return (ptr);
}
