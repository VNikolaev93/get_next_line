/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:50:59 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/16 15:46:29 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t			i;

	i = 0;
	u_dst = ((unsigned char *)dst);
	u_src = ((unsigned char *)src);
	if (dst == src)
		return (dst);
	if (u_dst > u_src)
	{
		while (i < n)
		{
			u_dst[n - 1] = u_src[n - 1];
			n--;
		}
	}
	else
		while (i < n)
		{
			u_dst[i] = u_src[i];
			i++;
		}
	return (dst);
}
