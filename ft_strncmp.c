#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a] && a < n)
		{
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		}
		a++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char s1[] = "assfinger";
	char s2[] = "assfunger";
	printf ("%d", strncmp(s1, s2, 5));
}
