/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:53:03 by paminna           #+#    #+#             */
/*   Updated: 2020/11/08 16:42:41 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	lenlittle;
	size_t	c;

	c = 0;
	i = 0;
	lenlittle = ft_strlen(needle);
	if (lenlittle == 0)
		return ((char*)&haystack[i]);
	if (*haystack == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(&haystack[i], &needle[c], lenlittle) == 0)
				if (i + lenlittle <= len)
					return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
