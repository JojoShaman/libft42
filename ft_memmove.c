/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:52:53 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:52:54 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;

	if (!dst && !src)
		return (NULL);
	d = dst;
	if (d == (unsigned char *) src)
		return (dst);
	if (d < (unsigned char *) src)
		return (ft_memcpy(d, src, len));
	else
	{
		while (len--)
			d[len] = ((unsigned char *) src)[len];
	}
	return (dst);
}
