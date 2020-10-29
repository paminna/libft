/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:12:53 by paminna           #+#    #+#             */
/*   Updated: 2020/10/26 14:21:54 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	char s[len];
	c = c + '0';

	i = 0;
	while (i != len)
	{
		s[i] = c;
		i++;
	}
	//s[i] = '\0';
	b = s;
	return (b);
}

int		main()
{
    printf("%s\n",ft_memset("agh", 4, 4));
}