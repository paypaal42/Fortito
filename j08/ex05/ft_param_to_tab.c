/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 17:02:32 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/29 19:10:01 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		ft_strlength(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strcpy(char *src, int len)
{
	int i;
	char *dest;

	i = 0;
	dest = (char*)malloc(sizeof(dest) * len);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par *ptr_params
	int i;

	i = 0;
	(void)ac;
	ptr_params = (t_stock_par*)malloc(sizeof(ptr_params) * ac);
	while (i < ac)
	{
		ptr_params.size_param = ft_strlength(av[i]);
		ptr_params.str = av[i];
		ptr_params.copy = ft_strcpy(av[i], ft_strlength(av[i]));
		ptr_params.tab = ft_split_whitespaces(av[i]);
	}
	return params;
}

int		main(int ac, char **av)
{
	(void)ac;
	ft_strlength(av[1]);
	return (0);
}
