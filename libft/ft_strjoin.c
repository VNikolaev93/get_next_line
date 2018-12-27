/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:25:24 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/14 16:53:27 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	char		*c_s1;

	if (!s1 || !s2)
		return (NULL);
	c_s1 = (char*)s1;
	if (!(res = (ft_strnew(ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	if (s1 && s2)
	{
		res = (ft_strcpy(res, c_s1));
		res = (ft_strcat(res, s2));
		return (res);
	}
	else
		return (NULL);
}
