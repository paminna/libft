/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:55:55 by paminna           #+#    #+#             */
/*   Updated: 2020/11/08 16:46:13 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char			*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*res;
	int			k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			k = 1;
			res = &s[i];
		}
		i++;
	}
	if (s[i] == c)
	{
		k = 1;
		res = &s[i];
	}
	if (k == 1)
		return ((char*)res);
	return (0);
}
