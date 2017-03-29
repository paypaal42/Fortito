
#include <stdlib.h>
#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

int					ft_size_param(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_copy(char *str, int length)
{
	int				i;
	char			*dest;

	i = 0;
	dest = (char *)malloc(sizeof(*str) * length);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*s_my_stock_par;

	i = 0;
	s_my_stock_par = (t_stock_par *)malloc(sizeof(t_stock_par) * ac);
	while (av[i])
	{
		s_my_stock_par[i].size_param = ft_size_param(av[i]);
		s_my_stock_par[i].str = av[i];
		s_my_stock_par[i].copy = ft_copy(av[i], ft_size_param(av[i]));
		s_my_stock_par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s_my_stock_par[i].str = 0;
	return (s_my_stock_par);
}
