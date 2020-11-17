/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:40:48 by paminna           #+#    #+#             */
/*   Updated: 2020/11/16 22:10:30 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t     end;
	size_t    start;
	int 	len;
    
  	start = 0;
	len = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
	end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end - start && ft_strchr(set, s1[end]) != NULL)
		end--;
	return(ft_substr(s1, start, end - start + 1));
}
