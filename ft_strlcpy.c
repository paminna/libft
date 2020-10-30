/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:27:10 by paminna           #+#    #+#             */
/*   Updated: 2020/10/30 19:38:36 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;
:q
	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize == 0) 
		dst[i] = '\0';
	return ((size_t) i + 1);
}

int		main(void)
{
	char *dst = "12342";
	char *src = "67891";

	size_t a = ft_strlcpy(dst, src, 6);
	printf("std: %zu\n", a);
}
