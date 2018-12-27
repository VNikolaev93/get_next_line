/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:56:12 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/14 17:25:01 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	buff;
	char	*h;

	h = (char*)haystack;
	if ((char)needle[0] == '\0')
		return (h);
	i = -1;
	while (h[++i] && i < len)
	{
		j = 0;
		buff = i;
		while (h[i] == (char)needle[j] && i < len && h[i] && needle[j])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return (&h[i - j]);
		i = buff;
	}
	return (NULL);
}
