#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	a;

	s2 = (char *)malloc(sizeof(*s1) * (strlen(s1) + 1));
	if (!s2)
		return (0);
	a = 0;
	while (s1[a])
	{
		s2[a] = s1[a];
		a++;
	}
	s2[a] = '\0';
	return (s2);
}/*
#include <stdio.h>

int	main(void)
{
	char a[] = "NO, i am not a loser!";
	printf ("%s", strdup(a));
}*/
