/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:37:47 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/01 11:50:12 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		word_c;

	i = 0;
	word_c = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] != c))
			i++;
		word_c++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (word_c);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		word_nb;
	int		word_len;
	char	**tab_s;

	i = 0;
	word_nb = 0;
	if (!(tab_s = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (s[i] && word_nb < ft_count_words(s, c))
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		word_len = ft_word_len(s + i, c);
		if (!(tab_s[word_nb] = (char*)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		while (j < word_len)
			tab_s[word_nb][j++] = s[i++];
		tab_s[word_nb][j] = '\0';
		word_nb++;
	}
	tab_s[word_nb] = NULL;
	return (tab_s);
}
