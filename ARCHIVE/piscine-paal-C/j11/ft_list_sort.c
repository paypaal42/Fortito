/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 14:02:33 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/22 13:03:03 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *first;
	t_list *list_next;
	t_list *list_current;
	t_list *tmp;
	int		i;

	i = 0;	
	if (!(begin_list))
		return (0);
	first = *begin_list;
	while (begin_list)
	{
		list_current = *begin_list;
		list_next = list_current->next;
		if ((*cmp)(list->data, list_next->data) > 1)
		{
			tmp = list_current;
			list_current = list_next;
			list_next = tmp;
			list_current
			i++;
		}
	}
	if (i > 0)
	{
		begin_list = first;
		ft_list_sort(begin_list, (*cmp)());
	}
}
