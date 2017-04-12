/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 09:42:26 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/12 11:30:08 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	read_input(char *av)
{	

	int fd;
	int bits_read;
	char buf[BUF_SIZE + 1];

	fd = open(av, O_RDONLY);	
	if (fd == -1)
	{
		write(2, "Error while opening", 20);
		return ;
	}
	bits_read = read(fd, buf, BUF_SIZE);
	buf[bits_read] = '\0';
	write(1, buf, bits_read);
}

int	main(int ac, char **av)
{

	if (ac == 1)
		write(2, "File name missing.", 18);
	if (ac > 2)
		write(1, "Too many arguments.", 19);
	if (ac == 2)
		read_input(av[1]);
	return (0);
}
