/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:50:09 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:51:12 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c)
{
	if (c >= 040 && c <= 176)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d\n", isprint('!'));
	printf("%d\n", ft_isprint('!'));
}*/
