/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:06:36 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/07 14:47:57 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int		count;
	int		in_substring;

	in_substring = 0;
	count = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		wlen(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nb_word;
	char	**tab;

	if (!s || !c)
		return (NULL);
	i = 0;
	nb_word = ft_count_words((const char *)s, c);
	if (!(tab = (char **)malloc(sizeof(*tab) * (nb_word) + 1)))
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(tab[i] = ft_strsub((const char *)s, 0, wlen((const char *)s, c))))
			return (NULL);
		s = s + wlen(s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
