/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:53:03 by paminna           #+#    #+#             */
/*   Updated: 2020/11/06 16:25:31 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int         i;
    int         c;
    int         l;

    l = 0;
    i = 0;
    c = 0;
    len = 0;
	// if (haystack[i] == '\0')
	// 	return ((char*)&haystack[i]);
	// else if (needle[i] == '\0')
	// 	return ((char*)&needle[i]);
    while (haystack[i] != needle[i])
        i++;
    while (haystack[i] == needle[i])
    {
		l++;
        i++;
    }
    if (l != (int)strlen(needle))
        return (NULL);
    return ((char*)&haystack[i]);
}
