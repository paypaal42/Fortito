/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 10:49:53 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/13 13:15:44 by pringsta         ###   ########.fr       */
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
