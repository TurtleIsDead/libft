#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = ft_strlen(src);
	if (size != 0)
	{
		while (src[a] != '\0' && a < size - 1)
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (b);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{

	char c[] = "lalala";
	char c1[] = "cat";
	printf ("%lu", ft_strlcpy(c, c1, 2));
	return (0);
}
