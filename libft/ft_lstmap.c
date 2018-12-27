/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:58:58 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/17 21:45:39 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_freemem(t_list *lst)
{
	t_list		*obj;

	while (lst)
	{
		obj = lst->next;
		free(lst->content);
		free(lst);
		lst = obj;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*temp;
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!(new_lst = ft_lstnew(temp->content, temp->content_size)))
		return (NULL);
	res = new_lst;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!(new_lst->next = ft_lstnew(temp->content, temp->content_size)))
		{
			ft_freemem(res);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (res);
}
