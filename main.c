/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:31:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/01 18:50:47 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>
#include <strings.h>

int	main(void)
{
	int i;	
	i = 0;
	printf("----------------------------------------------------\n");		
	printf("%s\n", ft_itoa(0));		
	printf("%s\n", ft_itoa(-2147483648));			
	printf("----------------------------------------------------\n");		
	char	*word1 = "psal";
	printf("%s\n", ft_strrchr(word1, 's'));
	//memchr(NULL, 0, 0);
	//ft_memchr(NULL, 0, 0);
	return (0);
}
