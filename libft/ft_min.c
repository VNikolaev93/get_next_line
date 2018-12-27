/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:59:11 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/17 21:45:55 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_min(int *tab, size_t len)
{
	int		min;

	if (!len)
		return (0);
	min = tab[--len];
	while (len--)
		if (tab[len] < min)
			min = tab[len];
	return (min);
}
