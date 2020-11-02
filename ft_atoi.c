/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:15:54 by paminna           #+#    #+#             */
/*   Updated: 2020/11/02 20:54:09 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

 int	atoi(const char *str)
 {
	int i;
	int res;
	int sign;

	sign = 1;
	i = 0;
	if (str[i] == '-')
		sign = -1;
	while (str[i] )
 }