/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 11:55:43 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/29 15:24:51 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_c_l(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != 8 && str[i] != 9 && str[i] != 32)
		i++;
	return (i);
}

int		ft_nb_words(char *str)
{
	int i;
	int w_c;

	i = 0;
	w_c = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == 8 || str[i] == 9 || str[i] == 32))
			i++;
		if (str[i])
			w_c++;
		while (str[i] && str[i] != 8 && str[i] != 9 && str[i] != 32)
			i++;
	}
	return (w_c);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		w_c;
	int		l;
	int		w_len;
	char	**tab;

	i = 0;
	w_c = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_nb_words(str) + 1))))
		return (0);
	while (str[i])
	{
		while (str[i] && (str[i] == 8 || str[i] == '\n' || str[i] == 32))
			i++;
		if (!(tab[w_c] = (char*)malloc(sizeof(char) * (ft_c_l(str + i) + 1))))
			return (0);
		w_len = ft_c_l(str + i);
		l = 0;
		while (l < w_len)
			tab[w_c][l++] = str[i++];
		if (w_len != 0)
			tab[w_c++][l] = '\0';
	}
	tab[w_c] = 0;
	return (tab);
}
