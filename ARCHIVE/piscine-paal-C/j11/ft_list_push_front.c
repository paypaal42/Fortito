/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 10:52:51 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 11:20:53 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	if (!(begin_list))
		begin_list = ft_create_element(data);
	else 
	{
		first = ft_create_element(data);
		first->next = *begin_list;
		*begin_list = first;
	}
}
