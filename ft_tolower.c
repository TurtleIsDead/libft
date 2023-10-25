/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:47:07 by asobor            #+#    #+#             */
/*   Updated: 2023/10/25 17:07:22 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 110)
		return (c + 32);
	else
		return (c);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_tolower('A'));
}*/
