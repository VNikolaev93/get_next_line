/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 20:52:13 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/15 15:02:05 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	b;
	int				znak;
	long long int	temp;

	b = 0;
	znak = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		znak = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		temp = b;
		b = b * 10 + *str - '0';
		if (b < temp)
			return (znak == -1 ? 0 : -1);
		str++;
	}
	return (znak * b);
}
