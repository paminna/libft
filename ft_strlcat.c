/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:49 by paminna           #+#    #+#             */
/*   Updated: 2020/11/04 17:58:48 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t 	i;
	int		c;
	char 	s[dstsize];

	i = 0;
	c = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		s[i] = dst[i];
		i++;
	}
	while (src[i] != '\0')
	{
		s[i] = src[c];
		i++;
		c++;
	}
	if (dstsize == 0 || i > dstsize)
		s[i] = '\0';
	return ((size_t) i + c);
}
