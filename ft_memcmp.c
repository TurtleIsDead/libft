/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:04:23 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 17:06:22 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			b;

	b = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (b < n - 1 && a1[b] == a2[b])
		b++;
	return (a1[b] - a2[b]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcdrfg";
	printf ("%d", ft_memcmp(s1, s2, 6));
}*/
