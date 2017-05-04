/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 15:42:14 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/04 19:20:29 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *head;
	t_list *tmp;
	if (!(lst || f))
		return (0);
	head = lst;
	tmp = NULL;
	if (!(lst || f))
		return (0);
	while (head)
	{
		if (!(ft_lstnew(head->content, head->content_size)))
			return (0);
		tmp->next;
	}	
}
