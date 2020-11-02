/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:27:10 by paminna           #+#    #+#             */
/*   Updated: 2020/11/02 20:23:59 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize == 0) 
		dst[i] = '\0';
	return (i);
}

int		main(void)
{
	char dst[5];
	const char *src = "";

	size_t a = ft_strlcpy(dst, src, 2);
	printf("std: %zu\n", a);
}
