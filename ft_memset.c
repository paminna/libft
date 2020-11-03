/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:12:53 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:51 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
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
