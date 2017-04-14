/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/14 11:16:14 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <strings.h>

int	main(int ac, char **av)
{
	int i;
	(void)ac;
	char *str1 = av[0];
	unsigned char str[20] = "IIIIIIIIIIIIIIIIIII";
	(void)str1;
	i = 0;
	printf("FT_PUTCAHR |--------------------------------\n\n");	
	printf("FT_MEMSET |--> %s\n", ft_memset(str, 97, 5));
	bzero(str, 3);
	while (i < 15)
		putchar(str[i++]);
	i = 0;
	ft_bzero(str, 5);
	while (i < 15)
		putchar(str[i++]);
	printf("\nBZERO |--> %s\n", str1);
	return (0);
}
