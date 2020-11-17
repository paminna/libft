/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:32:52 by paminna           #+#    #+#             */
/*   Updated: 2020/11/15 19:32:09 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int n_len(int n)
{
	int len;

	len = 0;
	if (n < 0 || n == 0)
		len = 1;
	while(n)
	{
		n = n/10;
		len++;
	}
	return (len);
}
char *ft_itoa(int n)
{
	char *res;
	int len;
	unsigned int nbr;

	nbr = n;
	len = n_len(n);
	res = (char*)malloc(len + 1);
	if (res == 0)
		return (NULL);
	res[len--] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nbr = n * -1;
	}
	if (n == 0)
		res[0] = '0';
	while (nbr != 0)
	{
		res[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}
