/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:42:44 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 18:19:48 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;

	if (!f || !lst)
		return (NULL);
	node = ft_lstnew(lst->content);
	if (!node)
		return (NULL);
	node->content = f(node->content);
	head = node;
	lst = lst->next;
	while (lst != NULL)
	{
		node = ft_lstnew(lst->content);
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
