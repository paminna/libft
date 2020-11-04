/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:12:53 by paminna           #+#    #+#             */
/*   Updated: 2020/11/04 18:44:47 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *s;

	s = (unsigned char*)b;
	i = 0;
	while (i != len)
	{
		s[i] = c;
		i++;
	}
	b = s;
	return (b);
}
