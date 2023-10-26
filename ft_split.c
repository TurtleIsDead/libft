/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:35:03 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 17:47:06 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcw(const char *str, char c)
{
	int	l;
	int	r;

	l = 0;
	r = 0;
	while (*str)
	{
		if (*str != c && r == 0)
		{
			r = 1;
			l++;
		}
		else if (*str == c)
			r = 0;
		str++;
	}
	return (l);
}

static char	*wup(const char *str, int start, int finish)
{
	char	*w;
	int		a;

	a = 0;
	w = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		w[a++] = str[start++];
	w[a] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	int		m;
	char	**sep;

	sep = malloc((wcw(s, c) + 1) * sizeof(char *));
	if (!s || !sep)
		return (NULL);
	a = 0;
	b = 0;
	m = -1;
	while (a <= ft_strlen(s))
	{
		if (s[a] != c && m < 0)
			m = a;
		else if ((s[a] == c || a == ft_strlen(s)) && m >= 0)
		{
			sep[b++] = wup(s, m, a);
			m = -1;
		}
		a++;
	}
	sep[b] = 0;
	return (sep);
}
