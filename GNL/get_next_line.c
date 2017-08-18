/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:11:04 by pringsta          #+#    #+#             */
/*   Updated: 2017/07/25 15:11:28 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static int		check_stock(char **stock, char **line)
{
	char	*tmp;

	if ((tmp = ft_strchr(*stock, '\n')))
	{
		*tmp = '\0';
		*line = ft_strdup(*stock);
		*stock = ft_strdup(++tmp);
		tmp = NULL;
		return (1);
	}
	return (0);
}

static	int		check_buffer(char *buffer, char **stock, char **line)
{
	char	*tmp;

	if ((tmp = ft_strchr(buffer, '\n')))
	{
		*tmp = '\0';
		*line = ft_strjoin(*stock, buffer);
		free(*stock);
		*stock = ft_strdup(++tmp);
		tmp = NULL;
		free(buffer);
		return (1);
	}
	return (0);
}

int				read_buffer(int const fd, char **stock, char ***line, int *rd)
{
	char		*leak;
	char		*buffer;

	buffer = ft_strnew(BUFF_SIZE);
	while (((*rd = read(fd, buffer, BUFF_SIZE)) > 0))
	{
		buffer[*rd] = '\0';
		if (check_buffer(buffer, stock, *line))
			return (1);
		leak = *stock;
		*stock = ft_strjoin(*stock, buffer);
		free(leak);
	}
	free(buffer);
	buffer = NULL;
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*stock = NULL;
	int			rd;

	if (stock && (check_stock(&stock, line)))
		return (1);
	rd = 0;
	if (read_buffer(fd, &stock, &line, &rd))
		return (1);
	if (rd == -1)
		return (-1);
	if (stock == NULL || !(ft_strcmp(stock, "")))
		return (0);
	*line = ft_strdup(stock);
	free(stock);
	stock = NULL;
	return (1);
}
