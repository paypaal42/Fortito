/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 08:26:40 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/18 10:24:15 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	if (nb > 2)
	{
		ft_recursive_factorial(nb - 1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (2);
}
