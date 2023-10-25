#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*b;
	size_t	a;

	a = count * size;
	if (count == 0 || size == 0)
	{
		b = malloc(0);
		return (b);
	}
	if ((a / count) != size)
		return (0);
	b = malloc(a);
	if (!b)
		return (0);
	ft_bzero(b, a);
	return (b);
}/*
#include <stdio.h>
int	main(void)
{
	printf ("%s", ft_calloc(40, 5));
}*/
