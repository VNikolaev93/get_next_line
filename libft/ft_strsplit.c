/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:25:18 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/17 22:01:19 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wordcount(const char *s, char c)
{
	int		i;
	int		flag;

	flag = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		if (*s == c && flag == 1)
			flag = 0;
		s++;
	}
	return (i);
}

static char		*ft_word(const char *s, char c)
{
	size_t	count;
	char	*word;

	count = 0;
	if (!s)
		return (NULL);
	while (s[count] && s[count] != c)
		count++;
	if (!(word = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	count = 0;
	while (*s && *s != c)
		word[count++] = *s++;
	word[count] = '\0';
	return (word);
}

static void		free_mem(char **array, int j)
{
	while (--j > -1)
		free(array[j]);
	free(array);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	k;

	if (!s || !(str = (char **)malloc(sizeof(char *) \
					* (ft_wordcount(s, c) + 1))))
		return (NULL);
	k = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			if (!(str[k++] = ft_word(s, c)))
			{
				free_mem(str, --k);
				free(str);
				return (NULL);
			}
			while (*s != c && *s)
				s++;
		}
	}
	str[k] = NULL;
	return (str);
}
