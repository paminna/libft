/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:58:02 by paminna           #+#    #+#             */
/*   Updated: 2020/11/14 00:15:58 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *res;
	
	i = 0;
	if (s == NULL)
		return(NULL);
	res = (char*)malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return(NULL);
	while (s[i])
	{
		res[i] = f(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
