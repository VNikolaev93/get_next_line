/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:46:02 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/24 19:28:10 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*get_str(char **curr_data)
{
	char			*str;
	char			*temp;
	size_t			i;

	i = 0;
	if (!(temp = ft_strdup(*curr_data)))
		return (NULL);
	while (temp[i] != '\n' && temp[i])
		i++;
	if (!(str = ft_strnew(i)))
		return (NULL);
	ft_strncpy(str, *curr_data, i);
	ft_strdel(curr_data);
	if (i < ft_strlen(temp))
	{
		if (!(*curr_data = ft_strdup(temp + i + 1)))
			return (NULL);
	}
	else
	{
		if (!(*curr_data = ft_strdup("\0")))
			return (NULL);
	}
	ft_strdel(&temp);
	return (str);
}

static char			*strjoin_free(char **curr_data, char *buf)
{
	char			*str;
	size_t			i;

	i = ft_strlen(*curr_data) + ft_strlen(buf);
	if (!(str = ft_strnew(i)))
		return (NULL);
	ft_strcpy(str, *curr_data);
	ft_strcat(str, buf);
	ft_strdel(curr_data);
	return (str);
}

static t_file		*find_t(t_file **slst, int fd)
{
	t_file			*temp;

	temp = *slst;
	while (temp)
	{
		if (temp->fd == fd)
			return (temp);
		temp = temp->next;
	}
	if (!(temp = (t_file *)malloc(sizeof(t_file))))
		return (NULL);
	if (!(temp->data = ft_strnew(0)))
		return (NULL);
	temp->fd = fd;
	temp->next = *slst;
	*slst = temp;
	return (temp);
}

int					get_next_line(const int fd, char **line)
{
	static t_file	*file;
	char			buf[BUFF_SIZE + 1];
	t_file			*curr;
	int				ret;

	if (BUFF_SIZE < 1 || fd < 0 || !line || (read(fd, buf, 0) < 0))
		return (-1);
	if (!(curr = find_t(&file, fd)))
		return (-1);
	ret = 0;
	while (!(ft_strchr(curr->data, '\n'))\
		&& (ret = read(fd, buf, BUFF_SIZE)) > 0)\
	{
		buf[ret] = '\0';
		if (!(curr->data = strjoin_free((char **)&curr->data, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !(ft_strlen(curr->data)))
		return (0);
	if (!(*line = get_str((char **)&curr->data)))
		return (-1);
	return (1);
}
