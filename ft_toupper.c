#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	printf ("%d", ft_toupper('b'));
}
