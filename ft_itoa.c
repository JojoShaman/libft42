/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/02 00:37:49 by srosu            #+#    #+#              */
/*   Updated: 2026/04/14 14:05:17 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert(char *str, long nb, int len)
{
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = 0;
	nb = n;
	if (n <= 0)
		len = 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	nb = n;
	if (n < 0)
		nb = -(long) n;
	str = ft_calloc(len + 1, sizeof(*str));
	convert(str, nb, len);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
