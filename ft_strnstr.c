/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:53:03 by paminna           #+#    #+#             */
/*   Updated: 2020/11/04 17:59:53 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char 	*big;
	const char 	*little;
	int			i;
	char		cpy[len];
	int			c;

	i = 0;
	c = 0;
	big = haystack;
	little = needle;
	while (big[i] != little[c])
			i++;
	while (big[i] == little[c])
	{
		cpy[c] = big[i];
		c++;
		i++;
	}
	cpy[c] = '\0';
	c = 0;
	big = cpy;
	return ((char*)&big[c]);
}
