/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/16 14:57:55 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 14:57:55 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void * (*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*track;
	t_list	*build;

	if (!lst)
		return (NULL);
	track = lst;
	new_node = NULL;
	build = new_node;
	while (track)
	{
		new_node = ft_lstnew(f(track->content));
		if (!new_node)
		{
			ft_lstclear(&build, del);
			return (NULL);
		}
		ft_lstadd_back(&build, new_node);
		track = track->next;
	}
	return (build);
}
