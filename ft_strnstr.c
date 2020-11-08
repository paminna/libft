/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:53:03 by paminna           #+#    #+#             */
/*   Updated: 2020/11/08 11:39:15 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t         i;
    int         c;
    int         l;

    l = 0;
    i = -1;
    c = 0;
    if (ft_strlen(needle) == 0)
        return ((char *)haystack);
    while (haystack[++i] && i < len - ft_strlen(needle))
    {
        l = 0;
		if(haystack[i] == needle[l])
        {
            while (needle[l] != '\0' && haystack[i] != '\0')
            {
              if (haystack[i++] != needle[l++])
              {
                i--;
                break ;
              }
            }
        }
        if (needle[l] == '\0')
            return ((char *)&haystack[i - ft_strlen(needle)]);
    }
    return (NULL);
}
