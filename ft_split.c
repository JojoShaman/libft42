/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/01 23:57:29 by srosu            #+#    #+#              */
/*   Updated: 2026/04/14 12:10:43 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	cw;
	int	in_word;

	i = 0;
	cw = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			cw++;
		}
		if (s[i] == c && in_word)
			in_word = 0;
		i++;
	}
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	char	**tab;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	tab = malloc((count_words(s, c) + 1) * sizeof(*tab));
	if (!tab)
		return (NULL);
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (!s[start])
			break ;
		len = 0;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		tab[i] = ft_substr(s, start, len);
		i++;
		start += len;
	}
	tab[i] = NULL;
	return (tab);
}
