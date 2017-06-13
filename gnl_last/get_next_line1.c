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

char	*get_string_with_n(char *current, char *tmp, char **line, int *ret)
{
	int size;

	size = ft_strchr(current, '\n') - current;
	tmp = ft_strdup(current + (size + 1));
	current[size] = '\0';
	*line = ft_strdup(current);
	free(current);
	current = ft_strdup(tmp);
	printf("Check5\n");
	free(tmp);
	return (current);
}

char		*get_string(int fd, char *buffer, char **line, char *current)
{
	int	size;

	printf("In --> Check6\n");
	size = ft_strchr(buffer, '\n') - buffer;
	buffer[size] = '\0';
	*line = ft_strjoin(current, buffer);
	free(current);
	current = ft_strdup(buffer + (size + 1));
	free(buffer);
	printf("V -- %s\n", current);
	printf("Out --> Check6\n");
	return (current);
}

int		get_next_line(int const fd, char **line)
{
	char			*buffer;
	static	char	*current;
	char			*tmp;
	int				size;
	static int				ret;

	buffer = ft_strnew(BUFF_SIZE);
	if (current && ret && ret < BUFF_SIZE)
		*line = ft_strdup(current);
	if (!current)
		current = ft_strnew(BUFF_SIZE);
	if (ft_strchr(current, '\n') != NULL)
	{
		current = get_string_with_n(current, tmp, line, 0);
		printf("Check4\n");
		printf("VI -- %s\n", current);
	}
	else
	{
		while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			printf("RET -- %d\n", ret);
			if ((ft_strchr(buffer, '\n') == 0) && ret == BUFF_SIZE)
			{
				printf("Check1\n");
				*line = ft_strdup(current); //ft_continue_to_read(
				printf("I -- %s\n", current);
				printf("I -- %d\n", ret);
				free(current);
				current = ft_strjoin(*line, buffer);
				free(*line);
				printf("I -- %s\n", current);
			}
			if ((ft_strchr(buffer, '\n') == 0) && ret < BUFF_SIZE)
			{	
				printf("Check2\n");
				buffer[ret] = '\0';
				*line = ft_strjoin(current, buffer);
				printf("II%s\n", *line);
				ret = 0;
			}
			if (ft_strchr(buffer, '\n') != 0)
			{
				printf("Check3\n");
				current = get_string(fd, buffer, line, current);
				printf("X -- %s\n", current);
				break ;
			}
		}
	printf("Check7\n");	
	}		
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
	return (0);
}
