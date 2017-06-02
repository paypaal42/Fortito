/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 18:32:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/02 17:02:08 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft/libft.h"
#include "get_next_line.h"
#define	BUFF_SIZE 10


/*int	return_line(char *full_text, char **line)
{
	t_gnl	*gnl;
	char	*tmp_p;
	char	*beg;
	int		len;
	
	beg = full_text;
	len = ft_strlen(full_text);
	while (full_text) // iterates one.. 
	{
		gnl->beg = beg;
		if ((tmp_p = ft_memchr(full_text, '\n', len)) != 0)
			gnl->end = tmp_p;
		
		gnl->size = ft_memchr(full_text, '\n', len) - (void*)full_text; 
		if ((tmp_p = ft_memchr(full_text, '\0', len)) != 0)
			gnl->next = NULL;
		else 
			gnl->next = `
	}
}
*/

int get_next_line(int const fd, char ** line) 
{
	int ret;
	char *tmp;
	char *full_text;
	char *buff;

	if (fd < 0 || (!(buff = ft_strnew(BUFF_SIZE))))
		return (-1);
	if (!(full_text = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
		full_text = ft_strjoin(full_text, buff);
	printf("%s------> %zu\n", full_text, ft_strlen(full_text));
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
