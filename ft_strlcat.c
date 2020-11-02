/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:49 by paminna           #+#    #+#             */
/*   Updated: 2020/11/02 21:01:18 by paminna          ###   ########.fr       */
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
	printf("s first part: %s\n", s);
	while (src[i] != '\0')
	{
		s[i] = src[c];
		i++;
		c++;
	}
	printf("s second part: %s\n", s);
	if (dstsize == 0 || i > dstsize)
		s[i] = '\0';
	return ((size_t) i + c);
}

int		main(void)
{
	char *dst;
	const char *src;

	dst = "12";
	src = "6789";
	size_t a = ft_strlcat(dst, src, 5);
	printf("answer: %zu\n", a);
}
