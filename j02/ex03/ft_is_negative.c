/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_proto.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 14:58:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/09 17:40:10 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n);

void	ft_putchar(char c);

void ft_is_negative(int n)
{
	if (n < 0)
		putchar('N');
	else
		putchar('P');
}
