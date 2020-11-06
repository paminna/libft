/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:49 by paminna           #+#    #+#             */
/*   Updated: 2020/11/06 16:16:51 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t 	i;
	size_t	c;
	//char 	s[dstsize];

	i = 0;
	c = 0;
	while (dst[i] != '\0' && dstsize-- != 0)
		i++;
	while (src[c])
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (i);
}
