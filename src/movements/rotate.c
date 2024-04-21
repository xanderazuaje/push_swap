/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:59:58 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/20 22:40:30 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void rotate(t_dlist **list)
{
	t_dlist *prev;
	t_dlist *i;

	if(!*list || !(*list)->next)
		return;
	prev = *list;
	(*list) = (*list)->next;
	(*list)->prev = NULL;
	i = *list;
	while (i->next)
		i = i->next;
	i->next = prev;
	prev->next = NULL;
}

static void rev_rotate(t_dlist **list)
{
	t_dlist *i;

	if(!*list || !(*list)->next)
		return;
	i = (*list);
	while (i->next)
		i = i->next;
	i->next = *list;
	i->prev->next = NULL;
	i->prev = NULL;
	(*list)->prev = i;
	*list = i;
}

void ra(t_dlist **list_a)
{
	rotate(list_a);
	ft_putstr_fd("ra\n", 1);
}

void rb(t_dlist **list_b)
{
	rotate(list_b);
	ft_putstr_fd("rb\n", 1);
}

void rr(t_dlist **list_a, t_dlist **list_b)
{
	rotate(list_a);
	rotate(list_b);
	ft_putstr_fd("rr\n", 1);
}

void rra(t_dlist **list_a)
{
	rev_rotate(list_a);
	ft_putstr_fd("ra\n", 1);
}

void rrb(t_dlist **list_b)
{
	rev_rotate(list_b);
	ft_putstr_fd("rb\n", 1);
}

void rrr(t_dlist **list_a, t_dlist **list_b)
{
	rev_rotate(list_a);
	rev_rotate(list_b);
	ft_putstr_fd("rr\n", 1);
}
