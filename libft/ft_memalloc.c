/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:43:34 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/06 14:23:31 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*free_mem;

	if ((free_mem = (void*)malloc(sizeof(void) * size)))
	{
		ft_bzero(free_mem, size);
		return (free_mem);
	}
	else
		return (NULL);
}
