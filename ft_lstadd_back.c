/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 10:29:15 by paminna           #+#    #+#             */
/*   Updated: 2020/11/14 10:32:42 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *elem;
	t_list *list_cpy;

	*list_cpy = **lst;
	*elem = ft_lstnew(new);
	while (*lst->next != 0)
		*lst = *lst->next;
	*lst = elem;
}