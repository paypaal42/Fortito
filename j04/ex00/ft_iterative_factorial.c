/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:53:56 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/14 21:10:34 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 1)
		return (0);
	if 	(nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	while (nb-- > 1)
		result *= (nb);
	return result;
}
