/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:53:56 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/14 21:16:11 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<time.h>

int     ft_iterative_factorial(int nb)
{
	int result;
	result = nb;
	if (nb < 1 )
		return (0);
	if 	(nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	while (nb-- > 1)
		result *= (nb);
	return result;
}

void	 return_values(int nb)
{
	int i;

	i = 0;
	while ( i++ < nb)
		printf("#%d: %d\n", i,ft_iterative_factorial(i));
}

int		main(void)
{
	return_values(20);
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(2147483647));
	return (0);
}

