/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:13:14 by pringsta          #+#    #+#             */
/*   Updated: 2017/07/25 15:13:21 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int	main(int ac, char **av)
{
	int		fd;
	char	**line;
	int		i;
	int		j;

	i = 1;
	j = 0;
	line = malloc(10);
	line[0] = malloc(200);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((i = get_next_line(fd, line)) == 1)
		{
			ft_putstr(line[0]);
			ft_putchar('\n');
		}
		close(fd);
	}
	else
		ft_putendl_fd("Usage: ./a.out filename", 1);
	return (0);
}
