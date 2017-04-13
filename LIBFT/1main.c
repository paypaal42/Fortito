/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/13 18:37:28 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int ac, char **av)
{
	int i;
	(void)ac;
	unsigned char str[20] = "IIIIIIIIIIIIIIIIIII";
	
	i = 0;
	printf("FT_PUTCAHR |--------------------------------\n\n");	
	printf("\nFT_MEMSET |--> %s\n", ft_memset(str, 97, 5));
	printf("BZERO |--> %s\n", bzero(str, 10));
	return (0);
}
