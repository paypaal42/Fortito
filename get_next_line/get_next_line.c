/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/08 19:56:40 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

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
		tmp = ft_strdup(current + (size + 1));
		current[size] = '\0';
		*line = ft_strdup(current);
		if (*line == NULL)
			return (-1);
		free (current);
		current = ft_strdup(tmp);;
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
		free(buffer);
	}
	return (*line && ret != 0) ? (1) : (0);
}

int	main(void)
{
	int				fd;
	char			**test;
	int				nb;
	int				i;

	nb = 1;
	i = 0;
	fd = open("test_string", O_RDWR);
	while (nb != 0)
	{
		i++;
		nb = get_next_line(fd, test);
		printf("# %d : %d, value : %s\n", i, nb, *test);
	}
	return (0);
}
