/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:51:16 by paminna           #+#    #+#             */
/*   Updated: 2020/11/19 19:56:26 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elem;
	t_list *lst_new;

	lst_new = NULL;
	if (lst == NULL && !f && !del)
		return (NULL);
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&lst_new, elem);
		lst = lst->next;
	}
	return (lst_new);
}
