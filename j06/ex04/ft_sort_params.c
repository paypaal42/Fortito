/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:09:36 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/21 17:21:19 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		//ft_putchar(str[i]);
		putchar(str[i]);
		i++;
	}
}

int		paal_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int *i;
	int *j;
	int n;
	int m;
	int tmp;

	n = 1;
	m = 2;
	i = &n;
	j = &m;
	argc = 3;	

	while (*i < argc)
		while (*j < argc)
		{	
			if (strcmp(argv[*i], argv[*j + 1]) > 0)
			{
				tmp = *j;
				*j = *i;
				*i = tmp;
			}
		j++;
		}
	i++;
	}	
	return (0);
}


































