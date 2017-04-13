/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:07:13 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/13 15:44:17 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void    ft_bzero(void *s, size_t n);

typedef struct s_list
{
  void         *content;
  size_t       content_size;
  struct       s_list *next;
}              t_list;

#endif
