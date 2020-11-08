/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:49 by paminna           #+#    #+#             */
/*   Updated: 2020/11/07 12:26:25 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t 	i;
	size_t	c;
	size_t	result;
	//char 	s[dstsize];

	i = 0;
	c = 0;
	while (dst[i] != '\0')
		i++;
	if (i < dstsize)
		result = ft_strlen(src) + i;
	else 
		result = ft_strlen(src) + dstsize;
	while (src[c] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (result);
}
