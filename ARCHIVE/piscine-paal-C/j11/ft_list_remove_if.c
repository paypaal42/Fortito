/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 13:26:34 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 13:59:48 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current_elem;
	t_list *prev_list_elem;

	prev_list_elem = begin_list;
	if (begin_list)
		return (0);
	while (begin_list)
	{
		current_elem = begin_list;
		if ((*cmp)(begin_list->data, data_ref))
		{
			pre_list_elem->next = begin_list->next;
			free (current_elem);
		}
		begin_list = begin_list->next;
	}
}
