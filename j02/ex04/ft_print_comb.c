/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_proto.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 11:04:46 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/11 20:03:46 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_comb(void);
void 	ft_printchar(char a, char b, char c);

void	ft_printchars(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if(!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
				if(a < b && b < c)
					ft_printchars(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
