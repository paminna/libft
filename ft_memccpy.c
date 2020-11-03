/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:36:27 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:17 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*s;
	char		*dest;
	size_t		i;

	i = 0;
	s = src;
	dest = dst;
	while (i < n - 1)
	{
		if (s[i] == c)
			break ;
		dest[i] = s[i];
		i++;
	}
	dest[i] = c;
	while (s[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	dst = dest;
	return (dst);
}
/*
int		main(void)
{
	unsigned char dst[10] =  "Hello";
 	unsigned char src[10] = "World";
 	printf("before: %s\n", dst);
 	ft_memccpy (dst, src, 'o', 10);
 	printf("after: %s\n", dst);
}
*/
