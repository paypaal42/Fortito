/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 12:40:37 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/19 21:01:30 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	if (nb < 0)
	{
		ft_putchar('-');
		nb2 = nb * -1;
	}
	else
	{
		nb2 = nb;
	}
	if (nb2 > 9)
	{
		ft_putnbr(nb2 / 10);
	}
	ft_putchar(nb2 % 10 + '0');
}
