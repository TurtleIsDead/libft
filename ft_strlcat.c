#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t  a;
	size_t  b;
	size_t	len;

	a = 0;
	b = 0;
	len = 0;

	while (src[len] != '\0')
		len++;
	if (dest[a] && size == 0)
		return (len);
	while (dest[a] && a < size)
		a++;
	if (size > 0)
	{
		while (src[b] && a + 1 < size)
		{
			dest[a++] = src[b++];
		}
	}
	if (b > 0)
	{
		dest[a] = '\0';
		return (len + a - b);
	}
	return (len + a);
}/*
int     main(void)
{

        char c[] = "lalala";
        char c1[] = "cat";
        printf ("%lu", ft_strlcat(c, c1, 2));
        return (0);
}*/
