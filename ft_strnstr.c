/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:38:22 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 16:54:55 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (len == 0 && big == NULL)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (little[a] == '\0')
		return ((char *)big);
	while (big[a] != '\0' && a < len)
	{
		while (big [a + b] == little[b] && big[a + b] != '\0'
			&& (a + b) < len)
		{
			b++;
		}
		if (b == ft_strlen(little))
			return ((char *)&big[a]);
		a++;
		b = 0;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "good day";
	char	s2[] = "day";
	printf ("%s", strnstr(s1, s2, 9));
}*/
