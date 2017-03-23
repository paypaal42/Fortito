/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 21:28:14 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/23 22:57:28 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//char	**ft_split_whitespaces(char *str);

int		space_character(char *str, int a)
{
	int z;

	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
		a++;
	z = a;
	return (z);
}

int		character_number(char *str, int z)
{
	int a;

	a = z;
	while ((str[a] != ' ' || str[a] != '\t' || str[a] != '\n') && str[a])
		a++;
	z = a;
	return (z);
}

int		ft_split_whitespaces(char *str)
{   
	int a;
	int z;
	int i;
	//char *dest;
	
	i = 0;
	a = 0;
	a = space_character(str, a);
	z = character_number(str, a);
	// take the first characters (strstr characters)
	// As of number 5 character till end, take another
	//dest = (char*)malloc(sizeof(*dest) * (z - a));
	//while (i < (z - a))
	//	dest[a + i] = str[a + 1];
	//return (*str + a);
	return (z);
}
int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_split_whitespaces(argv[1]));
	return (0);
}
