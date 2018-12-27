/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:36:57 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/17 17:12:59 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst1;
	unsigned char		*src1;
	size_t				i;

	if (dst == src)
		return (dst);
	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(dst1 + i) = *(src1 + i);
		i++;
	}
	return (dst);
}
