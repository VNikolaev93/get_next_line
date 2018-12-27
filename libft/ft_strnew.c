/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 21:52:23 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/15 15:01:55 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == (size_t)-1)
		return (NULL);
	if (!(str = (((char *)malloc(sizeof(char) * size + 1)))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
