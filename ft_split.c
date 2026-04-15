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

static char	**free_all(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

static int	word_len(char const *s, int start, char c)
{
	int		wl;

	wl = 0;
	while (s[start + wl] != c && s[start + wl] != '\0')
		wl++;
	return (wl);
}

static	char	**fill_tab(char const *s, int start, char c, char **tab)
{
	int		i;

	i = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (!s[start])
			break ;
		tab[i] = ft_substr(s, start, word_len(s, start, c));
		if (!tab[i])
			return (free_all(tab, i));
		start += word_len(s, start, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	char	**tab;

	start = 0;
	if (!s)
		return (NULL);
	tab = malloc((count_words(s, c) + 1) * sizeof(*tab));
	if (!tab)
		return (NULL);
	return (fill_tab(s, start, c, tab));
}
