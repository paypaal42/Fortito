/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 12:09:09 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/13 13:31:50 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchars(int a, int b, int c, int d)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
}

void	values_offset(int offset1, int offset2)
{
	int a;
	int b;
	int c;
	int d;

	a = offset1 / 10;
	b = offset1 % 10;
	c = offset2 / 10;
	d = offset2 % 10;
	if ((a == 9 && b == 8) && (c == 9 && d == 9))
		ft_putchars(a, b, c, d);
	else
	{
		ft_putchars(a, b, c, d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int offset1;
	int offset2;

	offset1 = 0;
	offset2 = 0;
	while (offset1 < 99)
	{
		while (offset2 < 100)
		{
			if (offset1 < offset2)
			{
				values_offset(offset1, offset2);
			}
			offset2++;
		}
		offset2 = 0;
		offset1++;
	}
}
