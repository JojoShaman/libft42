/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/02 00:37:49 by srosu            #+#    #+#              */
/*   Updated: 2026/04/02 01:38:30 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = 0;
	nb = n;
	if (n <= 0)
	{
		len = 1;
	}
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	nb = n;
	if (n < 0)
	{
		nb = -(long) n;
	}
	str = ft_calloc(len + 1, sizeof(*str));
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
