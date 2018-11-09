/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:21:28 by ldhanis           #+#    #+#             */
/*   Updated: 2018/11/09 15:03:59 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include "libft/libft.h"
# define BUFF_SIZE 32
# include <sys/types.h>

int		get_next_line(const int fd, char **line);
typedef	struct s_file	t_file;
struct	s_file{
	int		fd;
	char	*prev_str;
	t_file	*next;
};

#endif
