/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 12:37:16 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 13:03:01 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int i;
	int j;
	t_list	*beg;
	t_list	*end;
	t_list	*tmp;

	j = 0;
	tmp = *begin_list;
	if (!(begin_list))
		return (0);
	while (begin_list)
	{
		tmp = tmp->next;
		j++;
	}
	if (j = 1)
		return (tmp);
	while (i < j)
	{	
		beg = ft_lst_at(i++);
		end = ft_lst_at(j--);
		tmp = beg;
		beg = end;
		end = tmp;
	}
}
