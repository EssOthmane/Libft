/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:18:19 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/18 16:13:36 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_struct;

	my_struct = (t_list *)malloc(sizeof(t_list));
	if (!my_struct)
		return (NULL);
	my_struct->content = content;
	my_struct->next = NULL;
	return (my_struct);
}
