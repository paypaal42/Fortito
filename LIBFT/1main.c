/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 12:17:58 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <strings.h>

int	main(int ac, char **av)
{
	size_t i;
	i = 0;
	(void)ac;
	(void)av[0];
	printf("------------------------------------------------------------>\n");	
	char dst2[10] = "11111";
	char const src2[20] = "2222a";
	char dst3[10] = "11111";
	char const src3[20] = "2222a";
	printf("MEMCCPY --------> %s\n", memccpy(dst2, src2, 97 , atoi(av[1])));
	printf("FT_MEMCCPY -----> %s\n", ft_memccpy(dst3, src3, 97, atoi(av[2])));	
	printf("------------------------------------------------------------>\n");
	char dst[10] = "11111";
	char const src[20] = "2222222222222222";
	char dst1[10] = "33333";
	char const src1[20] = "4444444444444444";
	printf("MEMCPY --------> %s\n", memcpy(dst, src, atoi("9")));
	printf("FT_MEMCPY -----> %s\n", ft_memcpy1(dst1, src1, atoi("9")));	
	return (0);
}
