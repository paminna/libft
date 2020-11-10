/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:40:48 by paminna           #+#    #+#             */
/*   Updated: 2020/11/10 21:21:39 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int        i;
    int     j;
    
    i = 0;
    j = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    while (s1[i])
    {
        if(ft_strchr(s1,set[j]) == NULL)
            break;
    }
    return (0);
}