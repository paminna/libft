/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:34:45 by paminna           #+#    #+#             */
/*   Updated: 2020/10/31 14:40:31 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	while (i != n)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char s1[10] = "";
	char s2[10] = "12";
	printf("%d\n",memcmp(s1, s2, 10));
}
