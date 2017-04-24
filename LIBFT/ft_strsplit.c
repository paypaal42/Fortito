/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:37:47 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/24 20:40:52 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_word_len(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int		ft_count_words(char const *s, char c)
{
	int i;
	int word_c;

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

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int	word_nb;
	int word_len;
	char **tab_s;

	i = 0;
	j = 0;
	word_nb = 0;
	if (!(tab_s = (char**)malloc(sizeof(**tab_s) * (char))))
		return (NULL);
	while (s[i])
	{
		if (!(tab_s[i] = (char*)malloc(sizeof(**tab_s) *(ft_word_len(s + i) + 1))))
			return (NULL);
		word_len = ft_word_len(s + i)
		while (j < word_len)
			tab_s[word_nb][j++] = s[i++];
		tab_s[word_nb][j] = '\0';
		j = 0;
		word_nb++;
	}
	return (tab_s);
}

int	main(void)
{
	char const paal[50] = "*paal***paal**stein******q**";
	printf("%d\n", ft_count_words(paal, '*'));	
	return (0);
}
