/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/02 02:31:24 by srosu            #+#    #+#              */
/*   Updated: 2026/04/02 02:43:18 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*track;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	track = *lst;
	while (track->next != NULL)
	{
		track = track->next;
	}
	track->next = new;
}
