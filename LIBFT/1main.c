/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/14 19:03:00 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <strings.h>

int	main(int ac, char **av)
{
	size_t i;
	(void)ac;
	i = 0;
	char dst[10] = "11111";
	char const src[20] = "2222222222222222";
	char dst1[5] = "11111";
	char const src1[20] = "2222222222222222";
	printf("-----> %s\n", av[0]);
	printf("%p\n", &*(dst + 9));
	printf("%p\n", &*(dst + 11));
	printf("%p\n", &*(src + 1));
	printf("%p\n", &*(src + 16));
	printf("%s\n", memcpy(dst, src, 11));
	printf("%s\n", ft_memcpy(dst1, src1, 10));	
	return (0);
}
