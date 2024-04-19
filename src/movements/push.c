/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:37:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 08:01:48 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void push(t_dlist **list_1, t_dlist **list_2)
{
	t_dlist *prev;

	if (!list_2)
		return;
	prev = (*list_1);
	*list_1 = (*list_1)->next;
	(*list_1)->prev = NULL;

	prev->next = *list_2;
	(*list_2)->prev = prev;
	*list_2 = prev;
}

void pa(t_dlist **list_a, t_dlist **list_b)
{
	push(list_a, list_b);
	ft_putstr_fd("pa\n", 1);
}

void pb(t_dlist **list_a, t_dlist **list_b)
{
	push(list_b, list_a);
	ft_putstr_fd("pb\n", 1);
}
