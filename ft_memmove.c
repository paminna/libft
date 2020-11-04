/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:22:24 by paminna           #+#    #+#             */
/*   Updated: 2020/11/04 17:43:52 by paminna          ###   ########.fr       */
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
