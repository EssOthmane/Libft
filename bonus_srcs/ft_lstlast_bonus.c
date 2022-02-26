/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:48:58 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 16:22:22 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int main(void)
{
	t_list *lst, struct1, struct2, struct3, *last_struct;
	lst = &struct1;
	struct1.next = &struct2;
	struct2.next = &struct3;
	struct3.next = NULL;
	struct3.content = "Hello man.";
	last_struct = ft_lstlast(lst);
	printf("%s\n", last_struct->content);
}*/
