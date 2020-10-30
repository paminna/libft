/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:03:49 by paminna           #+#    #+#             */
/*   Updated: 2020/10/30 16:13:43 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int 	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i = (size_t) i;
	return (i);
}

int	main(void)
{
	printf("len: %zu\n", strlen("132456"));
	printf("my len: %zu\n", ft_strlen("132456"));
}
