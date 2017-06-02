/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/02 17:05:33 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft/libft.h"
#define	BUFF_SIZE 10


int get_next_line(int const fd, char ** line) 
{
	int ret;
	char *tmp;
	char *save_line;
	char *buff;
	int len;

	if (fd < 0 || (!(buff = ft_strnew(BUFF_SIZE))))
		return (-1);
	if (!(save_line = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strdup(save_line);
		free(save_line);	
		if  (ft_memchr(buff, '\n', BUFF_SIZE) == 0) 
			save_line = ft_strjoin(tmp, buff);
		else
		{	
			len = ft_memchr(buff, '\n', BUFF_SIZE) - (void*)buff;
			save_line = ft_strnew(ft_strlen(tmp) + len);
			save_line = ft_strcat(save_line, tmp);
			save_line = ft_strncat(save_line, buff, len);
		}
		free(tmp);
	} 
   	if (!(*line = ft_strdup(save_line)))
		return (-1);
	printf("%s\n", *line);
	return (1);
}

int	main(void)
{
	int fd;
	char **test;
	int nb;

	fd = open("new", O_RDWR);
	get_next_line(fd, test);
	return (0);
}
