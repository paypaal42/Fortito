/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 11:25:02 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 11:28:10 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_list_last(t_list *begin_list)
{
	t_list *last;

	if (!(begin_list))
		return (0);
	while (begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}
