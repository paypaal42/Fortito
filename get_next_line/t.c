/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/08 16:08:49 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft/libft.h"
#define	BUFF_SIZE 10

int		get_next_line(int const fd, char ** line) 
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
	{
		size = ft_strchr(current, '\n') - current;
		current[size] = '\0';
		*line = ft_strdup(current);
		free (current);
		current = ft_strdup(*line + (size + 1));
		printf("::::::> %s -> %zu ; %s -> %d\n", *line, ft_strlen(*line), current, size);		
	}
	else
	{	
		while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			if (ft_strchr(buffer, '\n') != 0)
			{
				size = ft_strchr(buffer, '\n') - buffer;
				buffer[size] = '\0';
				break ;
			}
			tmp = ft_strdup(current);
			free (current);
			current = ft_strjoin(tmp, buffer);
			free (tmp);
		}
		*line = ft_strjoin(current, buffer);
		if (*line == NULL)
			return (-1);
		free(current);
		current = ft_strdup(buffer + (size + 1));	
		printf("::::::> %s -> %zu ; %s -> %d\n", *line, ft_strlen(*line), current, size);		
		free(buffer);
	}
	return (*line && ret != 0) ? (1) : (0);
}

int	main(void)
{
	int fd;
	char **test;
	int nb;

	nb = 1;
	fd = open("test_string", O_RDWR);
	while (nb != 0)
	{
		nb = get_next_line(fd, test);
		printf("return value : %d\n ---------------\n", nb);
	}
	return (0);
}
