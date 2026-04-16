/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:53:46 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:53:47 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char) c == '\0')
		return (&str[i]);
	return (NULL);
}
