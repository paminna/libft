/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:57:50 by paminna           #+#    #+#             */
/*   Updated: 2020/11/17 17:07:36 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int word_counter(char const *s, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;
    while(s[i] == c && s[i] != '\0')
        i++;
    if (s[i] == 0)
        return (0);
    if (c == '\0')
        return (1);
    while (s[i])
    {
        while (s[i] != c && s[i] != '\0')
            i++;
        words++;
        while(s[i] == c )
            i++;
    }
    return (words);
}

int count_len(char const *s, char c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char **ft_split(char const *s, char c)
{
    char **words;
    int i;
    int len;
    int j;
    int k;

    j = 0;
    i = 0;
    k = 0;
    if (s == NULL)
        return (NULL);
    len = word_counter(s,c);
    words = (char**)malloc(len + 1);
    if (words == 0 || len == 0)
        return (NULL);
    while (i != len)
    {
        words[i] = (char*)malloc(count_len(s, c));
		while (s[k] == c)
            k++;
        while (s[k] != c && s[k] != '\0')
        {
            words[i][j] = s[k];
            j++;
            k++;
        }
        i++;
    }
	words[len] = NULL;
    return (words);
}

int main()
{
    char *string = "lorem ipsum";
    ft_split(string, 'i');
}
