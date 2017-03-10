/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_proto.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 11:04:46 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/10 15:07:35 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_comb(void);
//void    ft_putchar(char c);
void	ft_printchars(char a, char b, char c)
{
	putchar(a);
	putchar(b);
	putchar(c);
	if(!(a == '7' && b == '8' && c == '9'))
	{
		putchar(',');
		putchar(' ');
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

int main()
{
	ft_print_comb();
	//ft_print_comb();
	return(0);
}

