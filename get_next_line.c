/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:16:30 by ldhanis           #+#    #+#             */
/*   Updated: 2018/11/09 15:12:07 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	**get_prev(const int fd, t_file **fdlist)
{
	if (!*fdlist)
	{
		if (!(*fdlist = (t_file*)ft_memalloc(sizeof(t_file))))
			return (0);
		(*fdlist)->fd = fd;
		if (!((*fdlist)->prev_str = (char*)ft_memalloc(1)))
			return (0);
	}
	if ((*fdlist)->fd == fd)
		return (&(*fdlist)->prev_str);
	return (get_prev(fd, &(*fdlist)->next));
}

int		resolve_str(char *nl_loc, char **line, char **prev_str)
{
	char *temp_to_free;

	if (!nl_loc && !**prev_str)
		return (0);
	else if (!nl_loc)
	{
		*line = *prev_str;
		if (!(*prev_str = (char*)ft_memalloc(1)))
			return (-1);
	}
	else
	{
		temp_to_free = *prev_str;
		*nl_loc++ = 0;
		*line = ft_strdup(*prev_str);
		if (!(*line) || !(*prev_str = ft_strdup(nl_loc)))
			return (-1);
		free(temp_to_free);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_file	*fdlist;
	char			**prev_str;
	char			buffer[BUFF_SIZE + 1];
	ssize_t			read_res;
	char			*temp_to_free;

	if (fd < 0 || !line || !(prev_str = get_prev(fd, &fdlist)))
		return (-1);
	while (!(ft_strchr(*prev_str, '\n'))
			&& (read_res = read(fd, buffer, BUFF_SIZE)))
	{
		if (read_res == -1)
			return (-1);
		buffer[read_res] = 0;
		temp_to_free = *prev_str;
		if (!(*prev_str = ft_strjoin(*prev_str, buffer)))
			return (-1);
		free(temp_to_free);
	}
	return (resolve_str(ft_strchr(*prev_str, '\n'), line, prev_str));
}
