/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:07:13 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/14 14:26:29 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list *next;
}				t_list;

#endif
