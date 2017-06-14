/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/09 17:29:30 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*get_string_with_n(char **line, char *current, char *buffer)
{
	int size;
	char *tmp;

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

char	*ft_full_buffer_without_n(int fd, char *buffer, char **line, char *current)
{
	int ret;
	char *tmp;

	tmp = ft_strdup(current);
	if (ft_strlen(buffer) < BUFF_SIZE && ft_strchr(buffer, '\n') == NULL)
	{
		printf("CHECKPOINT 1\n");
		current = ft_strjoin(buffer, tmp);
		free(tmp);
	}	
	if (ft_strchr(buffer, '\n') != 0)
		current = get_string_with_n(line, current, buffer);
	else 
	{
		while (((ret = read(fd, buffer, BUFF_SIZE)) == BUFF_SIZE) && (ft_strchr(buffer, '\n') == 0))
		{
			*line = ft_strdup(current);
			free(current);
			current = ft_strjoin(*line, buffer);
			free(*line);
			printf("buffer II : %s\n", buffer);
		}
		printf("buffer III : %s\n", buffer);
		if (ft_strchr(buffer, '\n') != 0)
			current = get_string_with_n(line, current, buffer);
		else
		{ 
			buffer[ret] = '\0';
			*line = ft_strjoin(current, buffer); 
		}	
	}
	// printf("CHECK 5\n");
	return (current);	
}

int		get_next_line(int const fd, char **line)
{
	char		*buffer;
	static	char	*current;
	int	ret;

	buffer = ft_strnew(BUFF_SIZE);
	if (current && ret && ret < BUFF_SIZE)
		*line = ft_strdup(current);
	if (!current)
		current = ft_strnew(1);
	if (ft_strchr(current, '\n') != NULL)
		current = get_string_with_n(line, current, NULL);
	else
	{
		ret = read(fd, buffer, BUFF_SIZE);
		printf("buffer I. : %s\n", buffer);
		current = ft_full_buffer_without_n(fd, buffer, line, current);
	}		
	if (*line == NULL)
		return (-1);
	return (*line && ret != 0) ? (1) : (0); // currently, this will always be wrong..
}

int	main(void)
{
	int		fd;
	char	**test;
	int		nb;
	int		i;

	nb = 1;
	i = 0;
	fd = open("test1", O_RDWR);
	while (nb > 0)
	{
		i++;
		nb = get_next_line(fd, test);
		printf("# %d : %d, value : %s\n", i, nb, *test);
	}
	return (0);
}
