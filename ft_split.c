/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:57:50 by paminna           #+#    #+#             */
/*   Updated: 2020/11/18 21:40:36 by paminna          ###   ########.fr       */
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

    k = 0;
    i = 0;
    if (s == NULL)
        return (NULL);
    len = word_counter(s,c);
    words = (char**)malloc((len + 1) * sizeof(char *));
    if (words == 0)
        return (NULL);
    while (i != len)
    {
        j = 0;
        words[i] = (char*)malloc(count_len(&s[k], c));
		while (s[k] == c)
            k++;
        while (s[k] != c && s[k] != '\0')
        {
            words[i][j] = s[k];
            j++;
            k++;
        }
        words[i][j + 1] = '\0';
        i++;
    }
	words[len] = NULL;
    return (words);
}

// int main()
// {
//     char **res;
    
//     char string[] = "split  ||this|for|me|||||!|";
//     res = ft_split(string, '|');
//     printf("%s\n", res[0]);
//     printf("%s\n", res[1]);
//     printf("%s\n", res[2]);
//     printf("%s\n", res[3]);
//     printf("%s\n", res[4]);
//     printf("%s\n", res[5]);
// }
