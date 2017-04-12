/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:51:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/11 16:35:57 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_charpattern(int a, char typea, char typeb, char typec)
{
	int i;

	i=0;
	if(a >= 1)
	{
		putchar(typea);
	}
	if(a >= 3)
		while(i++ < (a-2))
		putchar(typeb);
	
	if(a >= 2)
		putchar(typec);
		putchar('\n');
}

void	head(int a)
{
	ft_charpattern(a, '/', '*', '\\');
}
void	body(int a)
{	
	int i;

	i=0;
	while(i++ < a-2)
		ft_charpattern(a, '*', ' ', '*');
}
void	tail(int a)
{	
	ft_charpattern(a, '\\', '*', '/');
}
void	rush(int a, int b)
{
	head(a);
	body(a, b);
	tail(a);
}
int		main(int ac, char **av)
{
	if (ac == 3)
	rush(atoi(av[1]),atoi(av[2]));
	return(0);
}
