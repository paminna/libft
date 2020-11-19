/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:49 by paminna           #+#    #+#             */
/*   Updated: 2020/11/19 19:43:05 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	result;

	i = 0;
	c = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (i < dstsize)
		result = ft_strlen(src) + i;
	else
		result = ft_strlen(src) + dstsize;
	while (src[c] != '\0' && i + c + 1 < dstsize)
	{
		dst[i + c] = src[c];
		c++;
	}
	if (i < dstsize)
		dst[i + c] = '\0';
	return (result);
}
