/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:08:38 by asobor            #+#    #+#             */
/*   Updated: 2023/08/21 16:33:21 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	a;

	a = 0;
	while (a < n)
	{
		((char *)dest)[a] = ((char *)src)[a];
		a++;
	}
	return (dest);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[1] = "";
	char src[8] = "dcbadcba";
	memcpy(dest,src,2);
//	ft_memcpy(dest, src, 2);
	printf ("%s\n", dest);
}
