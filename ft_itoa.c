/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:32:52 by paminna           #+#    #+#             */
/*   Updated: 2020/11/14 15:57:12 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *swap(char *res, int len)
{
	char *swap;
	int i;

	swap = (char*)malloc(len);
	i = 0;
	while (res[len--] != '\0')
	{
		swap[i] = res[len];
		i++;
	}
	return (swap);
}
char *ft_itoa(int n)
{
	char *res;
	int i;
	int len;

	res = (char*)malloc(n);
	if (res == 0)
		return (NULL);
	i = 0;
	if (n < 0)
		res[i] = '-';
	if (n == 0)
		res[i] = 0;
	while (n)
	{
		res[i] = n%10;
		n = n - res[i] * 10;
		i++;
	}
	len = i;
	res = swap (res,len);
	res[i] = '\0';
	return (res);
}