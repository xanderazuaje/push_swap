/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:37:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/20 18:17:01 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void push(t_dlist **list_1, t_dlist **list_2)
{
	t_dlist *node;

	if(!*list_1)
		return;
	node = *list_1;
	if(*list_2)
		(*list_2)->prev = node;
	*list_1 = (*list_1)->next;
	node->next = (*list_2);
	*list_2 = node;
	if(*list_1)
		(*list_1)->prev = NULL;
}

void pa(t_dlist **list_a, t_dlist **list_b)
{
	push(list_b, list_a);
	ft_putstr_fd("pa\n", 1);
}

void pb(t_dlist **list_a, t_dlist **list_b)
{
	push(list_a, list_b);
	ft_putstr_fd("pb\n", 1);
}
