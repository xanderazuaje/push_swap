/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_separation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:29:33 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:44:23 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "salchisort.h"

int8_t	has_smth_to_push(t_dlist *list, int pivot)
{
	while (list)
	{
		if (list->index <= pivot)
			return (1);
		list = list->next;
	}
	return (0);
}

void	sort(t_central *lists, int proportion, int pivot, int max)
{
	t_dlist	*pivot_a_ptr;
	int		dir;

	dir = 0;
	pivot_a_ptr = get_closest_pivot(lists->list_a, proportion, &dir);
	while (lists->list_a != pivot_a_ptr)
	{
		if (dir == 1)
		{
			ra(lists);
		}
		else
			rra(lists);
	}
	if (lists->list_a->index == max)
		ra(lists);
	else
	{
		pb(lists);
		if (lists->list_b && lists->list_b->index < pivot)
			rb(lists);
	}
}

void	chunk_separation(t_central *lists, int argc)
{
	int	proportion;
	int	pivot;
	int	max;

	if (!lists->list_a->next)
		return ;
	if (is_ordered(lists->list_a))
		return ;
	if (argc > 10)
		argc = argc / (argc / 10);
	else
		argc = 5;
	max = get_max_index(lists->list_a);
	proportion = get_min_index(lists->list_a) + (max / argc);
	if (proportion > max)
		proportion = max;
	pivot = get_min_index(lists->list_a) + (max / (argc * 2));
	while (has_smth_to_push(lists->list_a, pivot) && lists->list_a->next)
	{
		sort(lists, proportion, pivot, max);
	}
	chunk_separation(lists, argc);
}
