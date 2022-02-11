/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:25:17 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 17:13:50 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_node;
	t_list	*my_node;

	my_node = *lst;
	while (my_node != NULL)
	{
		prev_node = my_node;
		my_node = my_node->next;
		del(prev_node->content);
		free(prev_node);
	}
	*lst = NULL;
}
/*int main(void)
{
	return (0);
}*/
