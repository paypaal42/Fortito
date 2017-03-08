/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:18:45 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/08 22:52:29 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);
int ft_putchar(char c);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}


void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 0;
	while(i <  26)
	{
		ft_putchar('z' - i);
		i++;
	}	
}

int	main()
{
	ft_print_reverse_alphabet();
}

