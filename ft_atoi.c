/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:15:54 by paminna           #+#    #+#             */
/*   Updated: 2020/11/18 23:52:59 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_long(int sign)
{
	if (sign == -1)	
		return (0);
	return (-1);
}

int				ft_atoi(const char *str)
{
	int			i;
	long long	res;
	long long	tmp;
	int			sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = res;
		res = res * 10 + str[i] - '0';
		if (tmp > res && i != 0)
			return(check_long(sign));
		i++;
	}
	res = res * sign;
	return ((int)res);
}
