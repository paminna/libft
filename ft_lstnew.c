/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 09:52:35 by paminna           #+#    #+#             */
/*   Updated: 2020/11/14 09:58:28 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_lstnew(void *content)
{
	t_list *begin;

	begin = 0;
	begin = malloc(sizeof(t_list));
	if (begin == 0)
		return (begin);
	begin->content = content;
	begin->next = 0;
	return (content);
}