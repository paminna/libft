/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:36:09 by paminna           #+#    #+#             */
/*   Updated: 2020/11/03 20:56:52 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
		return (NULL);
	while (s[i])
	{
		if(s[i] == c)
			return((char*)&s[i]);
		i++;
	}
	return(0);
}
int		main(void)
{
	int	ch = '3';
	char *s = "123456";
	printf("%s\n", ft_strchr (s, ch));
}
