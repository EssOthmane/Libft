/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessayeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:45:39 by oessayeg          #+#    #+#             */
/*   Updated: 2021/11/20 13:11:17 by oessayeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#define MAX 9223372036854775807

static int	skip_spaces(const char *string)
{
	int	m;

	m = 0;
	while ((string[m] >= 9 && string[m] <= 13) || string[m] == 32)
		m++;
	return (m);
}

int	ft_atoi(const char	*str)
{
	int					compteur;
	unsigned long long	return_value;
	int					sign;

	compteur = skip_spaces(str);
	sign = 1;
	return_value = 0;
	if (str[compteur] == '-')
		sign = -1;
	if (str[compteur] == '+' || str[compteur] == '-')
		compteur++;
	while (str[compteur] >= '0' && str[compteur] <= '9')
	{
		return_value = return_value * 10 + (str[compteur] - '0');
		compteur++;
		if (return_value > MAX && sign == -1)
			return (0);
		else if (return_value > MAX && sign == 1)
			return (-1);
	}
	return ((int)return_value * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("%d\n", atoi("-92233720368547758000000"));
	printf("%d\n", ft_atoi("-92233720368547758000000"));
}*/
