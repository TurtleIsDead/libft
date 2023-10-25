/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:03:49 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 17:01:35 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char *)s)[a] == (unsigned char)c)
		{
			return (((unsigned char *)s) + a);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "debilf";
	printf ("%s", ft_memchr(s, 'f', 6));
}*/
