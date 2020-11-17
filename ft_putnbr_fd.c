/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:08:10 by paminna           #+#    #+#             */
/*   Updated: 2020/11/16 22:51:46 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	res;

	if (n > -10 && n < 10)
	{
		if (n < 0)
			write(fd, "-", 1);
	}
	else
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
		res = -1 * (n % 10) + '0';
	else
		res = 1 * (n % 10) + '0';
	write(fd, &res, 1);
}
