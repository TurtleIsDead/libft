/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:46:55 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 16:50:11 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	if (str[a] == '\0')
		return (0);
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9' && str[a] != '\0')
	{
		c = (c * 10) + (str[a] - '0');
		a++;
	}
	return (c * b);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = " 		 -6f7odjutw.";
	printf("%d", ft_atoi(a));
}*/
