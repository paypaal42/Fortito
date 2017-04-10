/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:15:35 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/27 19:27:23 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[j] = '\n';
	return (dest);
}

int		ft_strlength(char *argv)
{
	int j;

	j = 0;
	while (argv[j])
		j++;
	return (j);
}

int		ft_strings_length(int argc, char **argv)
{
	int i;
	int b;

	i = 1;
	b = 0;
	while (i < argc)
	{
		b += ft_strlength(argv[i]);
		i++;
	}
	return (b);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		j;
	int		k;
	int		b;
	char	*str1;

	k = 0;
	b = ft_strings_length(argc, argv);
	if ((str1 = (char*)malloc(sizeof(*str1) * (b))) == NULL)
		return (NULL);
	b = 1;
	while (b < argc)
	{
		j = 0;
		while (argv[b][j])
		{
			str1[k] = argv[b][j];
			j++;
			k++;
		}
		str1[k] = (b++ == (argc - 1)) ? '\0' : '\n';
		k++;
	}
	return (str1);
}
