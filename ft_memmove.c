/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 17:19:41 by srosu            #+#    #+#              */
/*   Updated: 2026/04/01 17:28:04 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*cpy;

	i = 0;
	str = (char *) src;
	cpy = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			cpy[len - 1] = str[len - 1];
			len--;
		}
	}
	else if (src > dst)
	{
		while (i < len)
		{
			cpy[i] = str[i];
			i++;
		}
	}
	return (dst);
}
