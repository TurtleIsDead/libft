#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	if (str[a] == '\0')
		return (0);
	while (str[a] == 32 || (str[a] >= 9 && str[a] <=13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9' && str[a] != '\0')
	{
		c = (c * 10) + (str[a] - '0');
		a++;
	}
	return (c * b);
}/*
#include <stdio.h>
int	main(void)
{
	char a[] = " 		 -6f7odjutw.";
	printf("%d", ft_atoi(a));
}*/
