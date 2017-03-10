/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:18:45 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 12:24:32 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while('a' <=  i)
	{
		ft_putchar(i);
		i--;
	}	
}

