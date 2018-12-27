/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:36:39 by bsharna           #+#    #+#             */
/*   Updated: 2018/11/30 19:37:23 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*schar;
	size_t			i;

	schar = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (schar[i] == (unsigned char)c)
			return (schar + i);
		i++;
	}
	return (NULL);
}
