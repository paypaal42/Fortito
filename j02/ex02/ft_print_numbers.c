/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_proto.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 11:56:32 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 17:26:12 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

