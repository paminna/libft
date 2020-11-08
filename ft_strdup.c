/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:40:07 by paminna           #+#    #+#             */
/*   Updated: 2020/11/07 12:14:46 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	size_t	i;

	i = -1;
	buffer = (char*)malloc(ft_strlen(s1) + 1);
	if (buffer == 0)
		return (NULL);
	while (s1[++i])
		buffer[i] = s1[i];
	buffer[i] = '\0';
	return (buffer);
}