/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 04:12:36 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 07:27:15 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include <stdlib.h>

typedef struct s_dlist
{
	int				value;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}	t_dlist;

t_dlist	*lstnew(int value);
t_dlist	*lstappend(t_dlist *node, int value);
t_dlist	*lstshift(t_dlist *node, int value);
void	lstclear(t_dlist *lst);
void	lstpop(t_dlist **list);
#endif
