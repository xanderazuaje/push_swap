/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:59:58 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:39:27 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void	rev_rotate(t_dlist **list)
{
	t_dlist	*last;

	if (!*list || !(*list)->next)
		return ;
	last = (*list);
	while (last->next)
		last = last->next;
	last->next = *list;
	last->prev->next = NULL;
	last->prev = NULL;
	(*list)->prev = last;
	*list = last;
}

void	rra(t_central *lists)
{
	rev_rotate(&lists->list_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_central *lists)
{
	rev_rotate(&lists->list_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_central *lists)
{
	rev_rotate(&lists->list_a);
	rev_rotate(&lists->list_b);
	ft_putstr_fd("rrr\n", 1);
}
