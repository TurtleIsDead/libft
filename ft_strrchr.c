#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char	r[] = "doorarak";
	printf ("%s", ft_strrchr(r, 'a'));
}
