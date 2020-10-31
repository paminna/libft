/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:46:43 by paminna           #+#    #+#             */
/*   Updated: 2020/10/30 11:21:15 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	int		result;
	char 	*str;
	
	i = 0;
	str =(char*)s;
	if (s == NULL)
		return (NULL);
	while (str && i != n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	printf("my mem: %s\n", ft_memchr("", '\0', 10));
	printf("std: %s\n", memchr("", '\0', 10));
}