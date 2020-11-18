/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:57:50 by paminna           #+#    #+#             */
/*   Updated: 2020/11/19 00:08:59 by paminna          ###   ########.fr       */
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

char **ft_clear_split(char **word)
{
	int i = 0;
	while (word[i] != NULL)
	{
		free(word[i]);
		i++;
	}
	free(word);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
    char **words;
    int i;
    int j;
    int k;

    k = 0;
    i = -1;
    if (s == NULL)
        return (NULL);
    if ((words = (char**)malloc((word_counter(s,c) + 1) * sizeof(char *))) == 0)
        return (NULL);
    while (i++ != word_counter(s,c))
    {
        j = 0;
        if ((words[i] = (char*)malloc(count_len(&s[k], c))) == NULL)
			return (ft_clear_split(words));
		while (s[k] == c)
            k++;
        while (s[k] != c && s[k] != '\0')
            words[i][j++] = s[k++];
        words[i][j + 1] = '\0';
    }
	words[word_counter(s,c)] = NULL;
    return (words);
}
