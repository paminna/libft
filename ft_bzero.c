/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:56:01 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:46 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char*)s;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
	s = str;
}

/*
int		main(void)
{
	char *s = (char*)malloc (10);
	s = "123456789";
	bzero(s,3);
	//printf("%s\n", s);
}
*/
