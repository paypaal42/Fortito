/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_proto.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 11:56:32 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 12:09:13 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_numbers(void);
//void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while( i <= '9')
	{
		putchar(i);
		i++;
	}
}


int main()
{
	ft_print_numbers();
}
