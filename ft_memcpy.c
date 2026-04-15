/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 17:16:16 by srosu            #+#    #+#              */
/*   Updated: 2026/04/01 17:22:19 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*cpy;

	i = 0;
	if (!dst && !src)
		return (NULL);
	str = (char *) src;
	cpy = dst;
	while (i < n)
	{
		cpy[i] = str[i];
		i++;
	}
	return (dst);
}
