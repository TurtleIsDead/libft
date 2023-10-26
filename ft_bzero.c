/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor < asobor@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:39:33 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 15:18:35 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	a;
	char	*b;

	a = 0;
	b = s;
	while (a < n)
	{
		b[a] = 0;
		a++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char	str[6] = "abcdef";
//	bzero(str, 1);
	ft_bzero(str, 2);
	printf ("%s\n", str);
}*/
