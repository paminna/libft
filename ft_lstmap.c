/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:51:16 by paminna           #+#    #+#             */
/*   Updated: 2020/11/18 22:38:54 by paminna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elem;
	t_list *lst_new;
	
	if (lst == NULL)
		return NULL;
	if(ft_lstnew(f(lst->content)))
		elem = ft_lstnew(f(lst->content));
	else 
	{
		del(lst->content);
		return (NULL);
	}
	lst_new = elem;
	lst = lst->next;
	while(lst)
	{
		if(ft_lstnew(f(lst->content)))
		{
			elem = ft_lstnew(f(lst->content));
			ft_lstadd_front(&lst_new, elem);
		}
		else
		{
			del(elem->content);
			del(lst_new->content);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst_new);
}
