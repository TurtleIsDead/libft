/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:08:38 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 17:13:26 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (!dest && !src)
		return (0);
	while (a < n)
	{
		((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
		a++;
	}
	return ((unsigned char *)dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[1] = "";
	char src[8] = "dcbadcba";
	memcpy(dest,src,2);
//	ft_memcpy(dest, src, 2);
	printf ("%s\n", dest);
}*/
