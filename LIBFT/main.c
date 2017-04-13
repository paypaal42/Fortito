/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/13 14:45:59 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int i;
	unsigned char str[20] = "OOOOOOOOOOOOOO";
	
	i = 0;
	printf("FT_PUTCAHR |--> %s\n", ft_memset(str, 97, 5));
	while (str[i])
		ft_putchar(str[i++]);
	return (0);
}
