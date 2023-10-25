#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  a;

	if (src == 0 && dest == 0)
		return (0);
	a = 0;
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (n < a)
		{
			((unsigned char *) dest)[a] = ((unsigned char *)src)[a];
			a++;
		}
	}
	else
	{
		while (a < n)
		{
			((unsigned char *)dest)[n - a - 1] = \
				((unsigned char *)src)[n - a - 1];
			a++;
		}
	}
	return ((unsigned char *)dest);
}/*
#include <stdio.h>
int main(void)
{
	char d[] = "HELL";
	char s[] = "hello";
	printf ("%s", ft_memmove(d, s, 5));
}*/
