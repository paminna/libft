/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:37:18 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 19:52:47 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
    const char *s;
    size_t i;

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
	ft_memcpy (dst, src, 5);
	printf("%s\n", dst);
 }

