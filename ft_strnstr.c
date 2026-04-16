/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:54:33 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:54:33 by srosu           ###   ########.fr        */
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
	if (!haystack || !needle)
		return (NULL);
	str = (char *) haystack;
	if (!needle[0])
		return ((char *) str);
	while (i < len && str[i])
	{
		j = 0;
		while (i + j < len && str[i + j] == needle[j] && needle[j])
			j++;
		if (!needle[j])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
