/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:51:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/11 15:21:55 by fwutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_charpattern(int a, char typea, char typeb, char typec)
{
	int i;

	i=-1;
	if(a > 0)
		putchar(typea);
	if(a > 2)
		while(i++ < (a-2))
			putchar(typeb);
	if(a>1)
		putchar(typec);
	putchar('\n');
}	
void	head(int a)
{
	ft_charpattern(a, '/', '*', '\\');
}
void	body(int a, int b)
{	
	int i;

	i=-1;
	while(i++ < b-2)
		ft_charpattern(a, '|', ' ', '|');
}
void	tail(int a)
{	
	ft_charpattern(a, '\\', '*', '/');
}
void	rush(int a, int b)
{
	head(a);
	body(a, b);
	tail(b);
}
int		main()
{
	rush(10,10);
	return(0);
}
