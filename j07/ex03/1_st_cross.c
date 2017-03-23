/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:15:35 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/23 15:23:33 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j + 1] = '\0';
	dest[j + 2] = '\n';
	return (dest);
}

int 	ft_strlength(char *argv)
{
//	int i;
	int j;

//	i = 0;
	j = 0;
	while (argv[j])
		j++;
	j = j + 2;
	return (j);
}

/*
char	*ft_concat_params(int argc, char **argv)
{
	int i;
	char *strings;
	
	(void)argc;
	i = 1;
	while (i < argc)
	{
		strings = ft_strcpy(strings[i], argv[i]);
				
	}
	return ();
}
*/


int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("%d : %s\n", i, argv[i]);	
		printf("%d : length: %d\n", i, ft_strlength(argv[i]));
		i++;
	}		
	return (0);
}
