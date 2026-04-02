/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <sorinrosu45@gmail.com>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/02 02:47:30 by srosu            #+#    #+#              */
/*   Updated: 2026/04/02 02:53:23 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*track;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	track = *lst;
	while (track)
	{
		del(track->content);
		tmp = track->next;
		free(track);
		track = tmp;
	}
	*lst = NULL;
}
