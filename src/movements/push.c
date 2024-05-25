/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 07:37:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:34:45 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void	push(t_dlist **list_1, t_dlist **list_2)
{
	t_dlist	*node;

	if (!*list_1)
		return ;
	node = *list_1;
	if (*list_2)
		(*list_2)->prev = node;
	*list_1 = (*list_1)->next;
	node->next = (*list_2);
	*list_2 = node;
	if (*list_1)
		(*list_1)->prev = NULL;
}

void	pa(t_central *lists)
{
	push(&lists->list_b, &lists->list_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_central *lists)
{
	push(&lists->list_a, &lists->list_b);
	ft_putstr_fd("pb\n", 1);
}
