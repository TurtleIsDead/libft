#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (len == 0 && haystack == NULL)
		return (0);
	if (strlen(needle)  == 0)
		return ((char *)haystack);
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		while (haystack [a + b] == needle[b] && haystack[a + b] != '\0' &&
			(a+b) < len)
		{
			b++;
		}
		if (b == strlen(needle))
			return ((char *)&haystack[a]);
		a++;
		b = 0;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char	s1[] = "good day";
	char	s2[] = "day";
	printf ("%s", strnstr(s1, s2, 9));
}
