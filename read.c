/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:28:51 by yvillepo          #+#    #+#             */
/*   Updated: 2017/12/04 21:20:27 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>

char	*read_fd(int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;
	t_lstr	*lstr;
	t_lstr	*current;

	lstr = lstr_new(0);
	current = lstr;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		current = lstr_addn(current, ft_strdup(buf));
	}
	if (ret < 0)
		exit_error("read file");
	return (lstr_dup_free(&lstr));
}

char	*read_file(char *str)
{
	int		fd;
	char	*s;

	fd = open(str, O_RDONLY);
	if (fd < 0)
		exit_error("open file");
	s = read_fd(fd);
	return (s);
}
