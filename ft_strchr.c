#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	printf("%s", ft_strchr("aaababa", 'b'));
}*/
