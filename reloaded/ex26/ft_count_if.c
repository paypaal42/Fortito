/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 09:19:25 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/12 09:32:02 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_return_one(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (1);
}

int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	f = &ft_return_one;
	while (tab[i])
	{
		f(tab[i]);
		i++;
	}
	return (i);
}
