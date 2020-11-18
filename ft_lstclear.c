/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:35:04 by paminna           #+#    #+#             */
/*   Updated: 2020/11/18 19:59:52 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *prev;
	
	while(*lst)
	{
		del((*lst)->content);
		prev = *lst;
		*lst = prev->next;
		free(prev);
	}
	*lst = NULL;
}
