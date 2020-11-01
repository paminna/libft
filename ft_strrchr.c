/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:36:20 by paminna           #+#    #+#             */
/*   Updated: 2020/11/01 21:06:54 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int 	i;
	char	*res;
	int		k;

	k = 0;
	i = 0;
	if (s == '\0')
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			res[k] = s[i];
			k++;
		}
		i++;
	}
	return (&res[k]);
}

int		main(void)
{
	int	ch = '3';
	char *s = "123436";
	printf("%s\n",ft_strrchr (s, ch));
}