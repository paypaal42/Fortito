/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 13:18:32 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 14:01:25 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!(begin_list))
		return (0);
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref))
			return (begin_list);
		begin_list = begin_list->next;
	}
	if (begin_list->next = NULL)
		return (NULL);
}
