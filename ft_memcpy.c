/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:37:18 by paminna           #+#    #+#             */
/*   Updated: 2020/11/06 22:16:52 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s == 0 && d == 0)
		return (NULL);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	dst = d;
	return (dst);
}
