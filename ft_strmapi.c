/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:58:02 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 18:03:04 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	a;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!(str))
		return (NULL);
	a = 0;
	while (str[a])
	{
		str[a] = (*f)(a, str[a]);
		a++;
	}
	return (str);
}
