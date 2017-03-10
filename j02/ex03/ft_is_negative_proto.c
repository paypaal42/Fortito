/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_proto.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 14:58:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 17:40:09 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_is_negative(int n);

//void	ft_putchar(char c);

void ft_is_negative(int n)
{
	if (n < 0)
		putchar('N');
	else
		putchar('P');
}


int  main()
{  
	int a;
	int b;
	int c;

	a = 10;
	b = -10;
	c = 0;

	ft_is_negative(a);	
	ft_is_negative(b);
	ft_is_negative(c);
}	
