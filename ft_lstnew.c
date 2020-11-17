/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 09:52:35 by paminna           #+#    #+#             */
/*   Updated: 2020/11/16 18:50:57 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *begin;

	begin = 0;
	begin = (t_list*)malloc(sizeof(t_list));
	if (begin == 0)
		return (NULL);
	if (begin == 0)
		return (begin);
	begin->content = content;
	begin->next = 0;
	return (begin);
}