/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:53:56 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/14 18:04:27 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<time.h>

int		ft_iterative_factorial(int nb)
{
	return (nb * 2);
}


int		main(void)
{
	//clock_t begin = clock();
	
	ft_iterative_factorial(233243);

	//clock_t end = clock();
	//double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	//printf("Time spent: %f seconds", time_spent * 1000);
}
