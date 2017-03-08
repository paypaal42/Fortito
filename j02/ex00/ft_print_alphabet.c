/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:15:06 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/08 22:18:00 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
int	ft_putchar(char c);

int	ft_putchar(char c)

{
	write(1, &c, 1);
	return(0);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 0;
	while(i < 26)
	{
		ft_putchar('a' + i);
		i++;
	}
	//ft_putchar('\n');
}

int	main()
{
	ft_print_alphabet();
}
