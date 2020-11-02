/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:22:24 by paminna           #+#    #+#             */
/*   Updated: 2020/11/02 21:00:14 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t        i;
    char     *source;
    char    *dest;

    source = (char*) src;
    dest = (char*) dst;
    i = 0;
    if (source < dest)
    {
        i += len;
        while (i != 0)
          {
            dest[i-1] = source[i-1];   
            i--;
          }
    }
    else if (source > dest)
    {
        while (i != len)
        {
          dest[i] = source[i];
          i++;
        }
    }
    return(dest);
}
int        main(void)
{
    unsigned char src[11] = "1234567890";
    unsigned char src1[11] = "1234567890";
    printf("my old: %s\n", src);
    printf("old: %s\n", src1);
    ft_memmove(&src[6], &src[4], 3);
    printf("my new: %s\n", src);
    memmove(&src1[6], &src1[4], 3);
    printf("new: %s\n", src1);
    return (0);
}
