/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 19:44:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/18 13:11:22 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 46)
		return (0);
	if (index > 3)
	{
		ft_fibonacci(index - 1);
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (2);
}
