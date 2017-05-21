/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 13:41:03 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 13:58:18 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *merged_list;
	
	merged_list = *begin_list1;
	if (!(begin_list1))
		return (0);	
	while (begin_list1)
	{
		begin_list1 = begin_list1->next;
	}
	begin_list1->next = begin_list2;
}
