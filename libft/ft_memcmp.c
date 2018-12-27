/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:43:53 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/11 16:38:48 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*xs1;
	unsigned char	*xs2;
	size_t			i;

	i = 0;
	xs1 = (unsigned char*)s1;
	xs2 = (unsigned char*)s2;
	while (i < n)
	{
		if (xs1[i] != xs2[i])
			return (xs1[i] - xs2[i]);
		i++;
	}
	return (0);
}
