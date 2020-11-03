/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:46:43 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:10 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)s;
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
/*
int		main(void)
{
	printf("my mem: %s\n", ft_memchr(NULL, '\0', 10));
	printf("std: %s\n", memchr(NULL, '\0', 10));
}*/
