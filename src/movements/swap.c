/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 06:59:42 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:41:10 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void	swap(t_dlist **list)
{
	t_dlist	*first;
	t_dlist	*second;
	t_dlist	*third;

	if (!(*list)->next)
		return ;
	first = *list;
	second = first->next;
	third = second->next;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	first->next = third;
	*list = second;
}

void	sa(t_central *lists)
{
	swap(&lists->list_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_central *lists)
{
	swap(&lists->list_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_central *lists)
{
	swap(&lists->list_a);
	swap(&lists->list_b);
	ft_putstr_fd("ss\n", 1);
}
