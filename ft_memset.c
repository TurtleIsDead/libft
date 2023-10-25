/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:59:11 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 17:12:27 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	a;
	char	*b;

	a = 0;
	b = str;
	while (a < len)
	{
		b[a] = c;
		a++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str[2] = "ab";
	printf ("%s\n", memset(str, 'c', 4));
	printf ("%s\n", ft_memset(str, 'c', 4));
}*/
