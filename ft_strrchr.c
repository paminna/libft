#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int 	i;
	char	res;

	i = 0;
	if (s == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = i - 48;
		i++;
	}
	return (res);
}
