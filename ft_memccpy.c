#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    const char 	*s;
	char 		*de;
	char 		d[n];
    int 		i;

    i = 0;
    s = src;
    de = dst;
    while (i++ != n)
        d[i] = de[i];
    i = 0;
    while (s[i] != c)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    dst = d;
	return (dst);
}