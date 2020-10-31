#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s == '\0')
		return (NULL);
	while (s[i] != c)
		i++;
	return ((char* )i);
}

int		main(void)
{
	int ch = '3';
	char *s = "123456";
	printf("%s\n", strchr (s, ch));
}
