/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:50:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/18 10:58:23 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int n;

	n = 1;
	if (nb == 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 2)
	{
		n = nb * (ft_recursive_power(nb, power - 1));
	}
	else
		return (nb);
	return (n);
}
