/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/15 12:53:48 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_string_with_n(char **line, char *current, char *buffer)
{
	int		size;
	char	*tmp;

	if (buffer == NULL)
	{
		tmp = ft_strdup(current + (ft_strchr(current, '\n') - current + 1));
		*ft_strchr(current, '\n') = '\0';
		*line = ft_strdup(current);
		free(current);
		current = ft_strdup(tmp);
		free(tmp);
	}
	else
	{
		size = ft_strchr(buffer, '\n') - buffer;
		buffer[size] = '\0';
		*line = ft_strjoin(current, buffer);
		free(current);
		current = ft_strdup(buffer + (size + 1));
		free(buffer);
	}
	return (current);
}

char	*ft_no_n(int ret, char **line, char *current, char *buffer)
{
	if (ret == BUFF_SIZE)
	{
		*line = ft_strdup(current);
		free(current);
		current = ft_strjoin(*line, buffer);
		free(*line);
	}
	if (ret < BUFF_SIZE)
	{
		buffer[ret] = '\0';
		*line = ft_strjoin(current, buffer);
	}
	return (current);
}

int		return_value(char **line, char *buffer, int ret)
{
	char	*tmp;
	int		size;

	if (ret == 0 && ft_strlen(buffer) == BUFF_SIZE)
	{
		size = ft_strchr(buffer, '\0') - buffer;
		buffer[size] = '\0';
		tmp = ft_strjoin(*line, buffer);
		free(*line);
		*line = ft_strdup(tmp);
		free(tmp);
	}
	if (*line == NULL)
		return (-1);
	return (*line && ret != 0) ? (1) : (0);
}

int		get_next_line(int const fd, char **line)
{
	char			*buffer;
	static	char	*current;
	static int		ret;

	buffer = ft_strnew(BUFF_SIZE);
	if (current && ret && ret < BUFF_SIZE)
		*line = ft_strdup(current);
	if (!current)
		current = ft_strnew(1);
	if (ft_strchr(current, '\n') != NULL)
		current = get_string_with_n(line, current, NULL);
	else
	{
		while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			if (ft_strchr(buffer, '\n') != 0)
			{
				current = get_string_with_n(line, current, buffer);
				break ;
			}
			if (ft_strchr(buffer, '\n') == 0)
				current = ft_no_n(ret, line, current, buffer);
		}
	}
	return (return_value(line, buffer, ret));
}
