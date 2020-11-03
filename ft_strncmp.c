/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:25:46 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 19:58:37 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if	(s1[i] < s2[i])
			return(-1);
		else if (s1[i] > s2[i])
			return(1);
		i++;
	}
	return (0);
}

int	main(void)
{
	const char *s1 = "1234567890";
	const char *s2 = "";
	size_t n = 6;
	printf("%d\n", ft_strncmp(s1, s2, n));
}