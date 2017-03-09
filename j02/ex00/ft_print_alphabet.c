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
#include <stdio.h>

void	ft_print_alphabet(void);

void	ft_putchar(char c) // check if there is a ft_putchar in 42

{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

  i = 'a'; 
	while(i < 123)
	{
		ft_putchar(i);
		i++;
	}
}
/*
int	main()
{
  printf("abcdefghijklmnopqrstuvwxyz");
  putchar('\n'); 
  ft_print_alphabet();
}
*/
