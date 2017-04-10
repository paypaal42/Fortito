/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 09:13:45 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/18 10:06:31 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime_nb(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		nb = 2;
	if (ft_prime_nb(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
