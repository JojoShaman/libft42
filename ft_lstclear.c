/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:57:34 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:57:35 by srosu           ###   ########.fr        */
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
