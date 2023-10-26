/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:46:12 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 19:24:30 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;

	if (!s)
		return (0);
	b = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > b)
		len = b;
	a = (char *)malloc(sizeof(*s) * (len + 1));
	if (!a)
		return (0);
	ft_strlcpy(a, &s[start], len + 1);
	return (a);
}
