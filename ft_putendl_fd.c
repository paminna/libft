/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:05:50 by paminna           #+#    #+#             */
/*   Updated: 2020/11/19 13:16:11 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	int		f;
	char	n;

	n = '\n';
	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f = write(fd, &s[i], 1);
		i++;
	}
	f = write(fd, &n, 1);
}
