/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:49:54 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/13 15:06:40 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if (!(new_list->content = malloc(content_size)))
		{
			free(new_list);
			return (NULL);
		}
		else
		{
			ft_memcpy(new_list->content, content, content_size);
			new_list->content_size = content_size;
		}
	}
	new_list->next = NULL;
	return (new_list);
}
