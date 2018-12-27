/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:05:08 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/12 15:29:31 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		n_cpy;
	int		len;
	int		znak;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_cpy = n;
	len = 2;
	znak = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	while (n_cpy /= 10)
		len++;
	len = len + znak;
	if (!(res = ft_strnew(len - 1)))
		return (NULL);
	res[len--] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n /= 10;
	}
	if (znak)
		res[0] = '-';
	return (res);
}
