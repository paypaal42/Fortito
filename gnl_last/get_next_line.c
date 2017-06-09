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

#include "get_next_line.h"

void	get_string_with_n(char *current, char *tmp, char **line, int size)
{
	size = 0;
	size = ft_strchr(current, '\n') - current;
	tmp = ft_strdup(current + (size + 1));
	current[size] = '\0';
	*line = ft_strdup(current);
	free(current);
	current = ft_strdup(tmp);
	free(tmp);
}

int		get_string_without_n(int fd, char *buffer, char **line, char *current)
{
	int	ret;
	int	size;

	ret = 0;
	size = 0;
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (ft_strchr(buffer, '\n') != 0)
		{
			size = ft_strchr(buffer, '\n') - buffer;
			buffer[size] = '\0';
			*line = ft_strjoin(current, buffer);
			free(current);
			current = ft_strdup(buffer + (size + 1));
			free(buffer);
			break ;
		}
		*line = ft_strdup(current);
		free(current);
		current = ft_strjoin(*line, buffer);
		free(*line);
	}
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	char			*buffer;
	static	char	*current;
	char			*tmp;
	int				size;
	int				ret;

	buffer = ft_strnew(BUFF_SIZE);
	if (!current)
		current = ft_strnew(BUFF_SIZE);
	if (ft_strchr(current, '\n') != NULL)
		get_string_with_n(current, tmp, line, 0);
	else
		ret = get_string_without_n(fd, buffer, line, current);
	if (*line == NULL)
		return (-1);
	return (*line && ret != 0) ? (1) : (0);
}


#include <stdio.h>

int	main(void)
{
	int		fd;
	char	**test;
	int		nb;
	int		i;

	nb = 1;
	i = 0;
	fd = open("test_string", O_RDWR);
	while (nb > 0)
	{
		i++;
		nb = get_next_line(fd, test);
		printf("# %d : %d, value : %s\n", i, nb, *test);
	}
	char	*hello = "hello world";
	printf("%p\n", hello);
	hello = hello + 5;
	printf("%p\n", hello);
	return (0);
}
