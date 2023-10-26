/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:49:53 by asobor            #+#    #+#             */
/*   Updated: 2023/10/26 17:56:37 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size(int n)
{
	size_t	si;

	if (n > 0)
		si = 0;
	else
		si = 1;
	while (n)
	{
		n /= 10;
		si++;
	}
	return (si);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	ze;
	size_t	wow;

	ze = n;
	wow = size(n);
	if (n < 0)
		ze *= -1;
	s = (char *)malloc(wow + 1);
	if (!s)
		return (NULL);
	*(s + wow--) = '\0';
	while (ze > 0)
	{
		*(s + wow--) = ze % 10 + '0';
		ze /= 10;
	}
	if (wow == 0 && s[1] == '\0')
		*(s + wow) = '0';
	else if (wow == 0 && s[1])
		*(s + wow) = '-';
	return (s);
}
