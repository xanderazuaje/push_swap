/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 04:12:36 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/07/16 05:04:07 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include <stdlib.h>

typedef struct s_dlist
{
	int				value;
	int				index;
	int				weight;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}	t_dlist;

typedef struct s_central
{
	t_dlist	*list_a;
	t_dlist	*list_b;
	t_dlist	*pivot;
}	t_central;

t_dlist	*lstnew(int value);
t_dlist	*lstappend(t_dlist *node, int value);
void	lstclear(t_dlist *lst);
int8_t	is_ordered(t_dlist *list);
int		count_list(t_dlist *list);
#endif
