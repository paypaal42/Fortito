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
