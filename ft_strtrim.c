/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:03:25 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 17:48:24 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	b;

	b = 0;
	while (set[b])
	{
		if (set[b] == c)
			return (1);
		b++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	b;
	size_t	c;
	size_t	d;

	if (!s1)
		return (NULL);
	c = 0;
	while (s1[c] && ft_char_in_set(s1[c], set))
		c++;
	d = ft_strlen(s1);
	while (d > c && ft_char_in_set(s1[d - 1], set))
		d--;
	a = (char *)malloc(sizeof(*s1) * (d - c + 1));
	if (!a)
		return (NULL);
	b = 0;
	while (c < d)
		a[b++] = s1[c++];
	a[b] = '\0';
	return (a);
}
