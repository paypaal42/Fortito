
#include <stdlib.h>
#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

int					ft_strlength(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *str, int length)
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
	t_stock_par		*ptr_params;

	i = 0;
	ptr_params = (t_stock_par *)malloc(sizeof(t_stock_par) * ac);
	while (av[i])
	{
		ptr_params[i].size_param = ft_strlength(av[i]);
		ptr_params[i].str = av[i];
		ptr_params[i].copy = ft_strcpy(av[i], ft_strlength(av[i]));
		ptr_params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ptr_params[i].str = 0;
	return (ptr_params);
}
