/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 17:22:33 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/14 16:20:35 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*under_str;
	size_t		i;

	i = 0;
	if (!(under_str = (ft_strnew(len))) || !s)
		return (NULL);
	{
		while (len)
		{
			under_str[i] = s[start];
			start++;
			i++;
			--len;
		}
		return (under_str);
	}
}
