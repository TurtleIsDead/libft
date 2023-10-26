/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:55:39 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 17:01:08 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	b;
	size_t	c;

	if (!s1 || !s2)
		return (NULL);
	a = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!a)
		return (NULL);
	b = 0;
	c = 0;
	while (s1[b])
	{
		a[c++] = s1[b];
		b++;
	}
	b = 0;
	while (s2[b])
	{
		a[c++] = s2[b];
		b++;
	}
	a[c] = 0;
	return (a);
}
