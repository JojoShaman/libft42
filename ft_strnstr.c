/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 19:33:26 by srosu            #+#    #+#              */
/*   Updated: 2026/04/02 10:48:23 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *) haystack;
	if (!needle[0])
		return ((char *) str);
	if (str[i] && len > 0)
	{
		while (i < len)
		{
			j = 0;
			while (i + j < len && str[i + j] == needle[j])
				j++;
			if (!needle[j])
				return (&str[i]);
			i++;
		}
	}
	return (NULL);
}
