#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
    const char *s;
    int i;
	char cpy;

    i = -1;
    s = src;
    d = (char*) src;
		i++;
	cpy = s[i];
	printf("cpy:%c\n", cpy);
	printf("d[i+1]:%c\n", d[i+1]);
	d[i+1] = cpy;
	printf("%c\n", d[i+1]);
	//cpy = i + len;
	//while (++i != cpy)
	//	d[i+1] = s[i];
	d[i+1] = cpy;
	while (s[i++])
		d[i] = s[i+1]; 
    dst = d;
	return (dst);
 }
 int main(void)
 {
	unsigned char dst[10] =  "123";
	unsigned char src[10] = "4564567890";
	// printf("src old: %s\n", src);
	// memmove(&src[3], &src[4], 5);
	// printf("src new: %s\n", src);

	memmove(src, dst, 3);
	printf("%s\n", src);
 }
