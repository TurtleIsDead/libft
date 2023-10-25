/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:37:17 by asobor            #+#    #+#             */
/*   Updated: 2023/08/14 15:28:58 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "12 12 12 12";
	printf ("%d\n", ft_strlen(str));
	printf("%d", strlen(str));
}*/
