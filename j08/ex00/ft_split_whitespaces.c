#include <stdlib.h>

int			ft_count_words(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
		k++;
	}
	if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
		k--;
	return (k);
}

int			ft_count_characters(char *str, int i)
{
	int		chars;

	chars = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		chars++;
		i++;
	}
	return (chars);
}

int			ft_next_word_index(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	return (i);
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		x;
	int		chars;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char**)(malloc(sizeof(char*) * (ft_count_words(str) + 1)));
	while (str[i])
	{
		x = -1;
		i = ft_next_word_index(str, i);
		chars = ft_count_characters(str, i);
		tab[j] = (char*)(malloc(sizeof(char) * (chars) + 1));
		while (++x < chars)
		{
			tab[j][x] = str[i];
			i++;
		}
		tab[j][x] = '\0';
		j++;
	}
	tab[j] = 0;
	return (chars == 0 ? 0 : tab);
}
