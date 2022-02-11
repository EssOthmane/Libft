/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:40:19 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 16:19:10 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main(void)
{
	t_list *head, *new, *s1, *s2, *s3;
	head = s0;
	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;
	s1 = ft_lstnew("Bonjour");
	ft_lstadd_front(&head, s1);
	printf("%s\n", s1->content);
}*/
