/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:51:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/11 15:00:48 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



void	ft_charpattern(int a, char typea, char typeb, char typec)
{
	int i;

	i=0;
	if(a > 0)
		putchar(typea);
	if(a > 2)
		while(i < (a-2))
		{
			putchar(typeb);
			i++;
		}
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

	i=0;
	while(i < b-2)
	{
		ft_charpattern(a, '|', ' ', '|');
		i++;
	}	
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
	rush(5,5);
	return(0);
}

