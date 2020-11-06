/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:40:07 by paminna           #+#    #+#             */
/*   Updated: 2020/11/06 17:27:11 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char 	*buffer;

	buffer = (char*)malloc(ft_strlen(s1) + 1);
	if (buffer)
		return (buffer);
	return NULL;
}