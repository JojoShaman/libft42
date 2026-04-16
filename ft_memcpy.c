/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:52:46 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:52:47 by srosu           ###   ########.fr        */
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
