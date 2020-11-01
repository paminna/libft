/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:53:03 by paminna           #+#    #+#             */
/*   Updated: 2020/11/01 21:20:18 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char 	*big;
	const char 	*little;
	int 		i;
	char		cpy[len];
	int			c;

	i = 0;
	c = 0;
	big = haystack;
	little = needle;
	while (i < len)
	{
		if (big[i] == little[c])
		{
			cpy[c] = big[i];
			c++;
		}
		i++;
	}
	return (&cpy[c]);
}

int		main(void)
{
	char 	*little;
	char 	*big;
	int 	len;

	little = "678";
	big = "1234567890";
	len = 11;
	printf("%s\n", ft_strnstr(big,little,len));
}