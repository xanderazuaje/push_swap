/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:59:58 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:40:28 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void	rotate(t_dlist **list)
{
	t_dlist	*prev;
	t_dlist	*i;

	if (!*list || !(*list)->next)
		return ;
	prev = *list;
	(*list) = (*list)->next;
	(*list)->prev = NULL;
	i = *list;
	while (i->next)
		i = i->next;
	i->next = prev;
	prev->next = NULL;
	prev->prev = i;
}

void	ra(t_central *lists)
{
	rotate(&lists->list_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_central *lists)
{
	rotate(&lists->list_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_central *lists)
{
	rotate(&lists->list_a);
	rotate(&lists->list_b);
	ft_putstr_fd("rr\n", 1);
}
