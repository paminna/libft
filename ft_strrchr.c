/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:55:55 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:01:58 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h> 

char *ft_strrchr(const char *s, int c)
{
	int 	i;
	const char	*res;
	int		k;

	i = 0;
	k = 0;
	if (s == '\0')
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			k = 1;
			res = &s[i];
		}	
		i++;
	}
	if (k == 1)
		return ((char*)res);
	return(0);
}
int		main(void)
{
	int ch = '3';
	char *s = "123436";
	printf("%s\n", ft_strrchr (s, ch));
}

