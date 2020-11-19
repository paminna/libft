/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:59:39 by paminna           #+#    #+#             */
/*   Updated: 2020/11/19 13:35:20 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	i;

	str = (char*)malloc(len + 1);
	if (str == NULL || s == NULL)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > 0)
	{
		while (s[i] && i < len)
		{
			str[i] = s[i + start];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
