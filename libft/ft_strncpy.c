/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:01:21 by bsharna           #+#    #+#             */
/*   Updated: 2018/11/29 16:30:49 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t s;

	s = 0;
	while (src[s] != '\0' && s < len)
	{
		dst[s] = src[s];
		s++;
	}
	while (s < len)
	{
		dst[s] = '\0';
		s++;
	}
	return (dst);
}
