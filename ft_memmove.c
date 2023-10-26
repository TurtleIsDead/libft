/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:05:43 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 16:56:33 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (src == 0 && dest == 0)
		return (0);
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (a < n)
		{
			((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
			a++;
		}
	}
	else
	{
		while (a < n)
		{
			((unsigned char *)dest)[n - a - 1] = \
				((unsigned char *)src)[n - a - 1];
			a++;
		}
	}
	return ((unsigned char *)dest);
}
/*
#include <stdio.h>
int main(void)
{
	char d[] = "HELL";
	char s[] = "hello";
	printf ("%s", ft_memmove(d, s, 5));
}*/
