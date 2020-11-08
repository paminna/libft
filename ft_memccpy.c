/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:36:27 by paminna           #+#    #+#             */
/*   Updated: 2020/11/07 12:02:11 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t			i;
	int			check;

	check = 1;
	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (i != n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
		{
			i++;
			check = 0;
			break ;
		}
		i++;
	}
	if (check == 0)
		return (&d[i]);
	return (NULL);
}
