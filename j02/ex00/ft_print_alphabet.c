/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:15:06 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 12:26:15 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_alphabet(void);
void	ft_putchar(char c);

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
