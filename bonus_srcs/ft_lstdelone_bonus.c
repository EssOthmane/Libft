/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:57:21 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 17:05:47 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
int main(void)
{
	t_list *struc1;
	struc1 = malloc(sizeof(t_list));
	struc1->content = malloc(sizeof(void));
	ft_lstdelone(struc1, &del);
}*/
