/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:00:28 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/05 18:09:44 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	j = 0;
	f = 0;
	while (needle[f] != '\0')
		f++;
	if (*needle == '\0')
		return ((char*)&haystack[i]);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			if (j == f - 1)
				return ((char*)&haystack[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
