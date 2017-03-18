/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:05:56 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/15 22:16:53 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
