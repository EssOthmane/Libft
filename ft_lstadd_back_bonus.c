/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:39:05 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 17:02:20 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*my_node;

	if (!alst || !new)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	my_node = *alst;
	while (my_node->next != NULL)
		my_node = my_node->next;
	my_node->next = new;
}
/*#include <stdio.h>
int main(void)
{
	t_list *head, st1, st2, st3, *new;
	st1.next = &st2;
	st2.next = &st3;
	st3.next = NULL;
	head = &st1;
	new = malloc(sizeof(t_list));
	new->content = (char *)malloc(sizeof(char) * 9);
	new->content = "bonjour";
	ft_lstadd_back(&head, new);
	while (head->next != NULL)
		head = head->next;
	printf("%s\n", (*head).content);
}*/
