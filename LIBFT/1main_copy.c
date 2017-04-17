/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 16:40:20 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <strings.h>

int	main(int ac, char **av)
{
	size_t i;
	size_t a;
	size_t b;
	size_t c;
	size_t d;

	(void)ac;
	i = 0;
	(void)av[0];
	char dst[11] = "11111";
	a = sizeof(dst);
	char const src[20] = "2222222222222222";
	b = sizeof(src);
	char dst1[10] = "33333";
	c = sizeof(dst1);
	char const src1[20] = "4444444444444444";
	d = sizeof(src1);
	printf("sizeof src-----> %zu\n", a);
	printf("adresse src----> %p\n", src);
	printf("sizeof dst-----> %zu\n", b);
	printf("adresse dst1----> %p\n", dst);
	printf("sizeof src1----> %zu\n", d);
	printf("adresse dst----> %p\n", dst1);
	printf("sizeof dst1----> %zu\n", c);
	printf("---------------> %s\n", av[0]);
	printf("MEMCPY --------> %s\n", memcpy(dst, src, atoi(av[1])));
	printf("FT_MEMCPY -----> %s\n", ft_memcpy1(dst1, src1, atoi(av[2])));	
	printf("MEMCPY --------> %p\n", dst);
	printf("FT_MEMCPY -----> %p\n", dst1);
	printf("FT_MEMCPY -----> %p\n", src1);
	return (0);
}
