#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
    const char *s;
    int i;

    i = -1;
    s = src;
    d = dst;
    while (++i != n && d[i])
        d[i] = s[i];
    dst = d;
	return (dst);
 }

 int main(void)
 {
	unsigned char dst[10] =  "Hello";
	unsigned char src[10] = "World";
	printf("%s\n", dst);
	ft_memcpy (dst, src, 3);
	printf("%s\n", dst);
 }

