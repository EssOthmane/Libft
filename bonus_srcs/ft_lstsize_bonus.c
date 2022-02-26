/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:13:48 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 16:20:50 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	compteur;

	compteur = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		compteur++;
	}
	return (compteur);
}
/*
#include <stdio.h>
int main(void)
{
	t_list *head, s1, s2, s3, s4, s5;
	head = &s1;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	s4.next = &s5;
	s5.next = NULL;
	printf("%d\n", ft_lstsize(head));
}*/
