/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:15:54 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:43 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

 int	ft_atoi(const char *str)
 {
	int i;
    long long res;
    int sign;

    sign = 1;
    i = 0;
    res = 0;
    while (str[i] == 32 || (str[i] > 7 && str[i] < 14))
        i++;
    if (str[i] == '-')
    {
      sign = -1;
      i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    res = res * sign;
    return (res);
 }
 /*
 int	main(void)
 {
	printf("my1: %d\n", ft_atoi(NULL));
	printf("my2: %d\n", ft_atoi("    -1234"));
	printf("my3: %d\n", ft_atoi("fg1234"));
	printf("my4: %d\n", ft_atoi("1234"));
	printf("my5: %d\n", ft_atoi(" 1 234"));
	printf("my6: %d\n", ft_atoi(" - 1234"));
	printf("my7: %d\n", ft_atoi("    1234"));
	printf("my8: %d\n", ft_atoi("1we234"));
	printf("my9: %d\n", ft_atoi("--1234"));
 }*/
