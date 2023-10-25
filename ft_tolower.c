#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 110)
		return (c + 32);
	else
		return (c);
}
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_tolower('A'));
}
