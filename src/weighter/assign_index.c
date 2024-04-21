/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:51:10 by xander            #+#    #+#             */
/*   Updated: 2024/04/19 22:19:17 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weighter.h"
#include <stdio.h>

t_dlist	*get_smallest(t_dlist *list_a)
{
	t_dlist *min;

	min = NULL;
	while (list_a)
	{
		if (list_a->index != -1)
		{
			list_a = list_a->next;
			continue;
		}
		if (!min || list_a->value < min->value)
			min = list_a;
		list_a = list_a->next;
	}
	return min;
}

t_dlist	*get_biggest(t_dlist *list_a)
{
	t_dlist *max;

	max = list_a;
	while (list_a->next)
	{
		if (list_a->next->value > max->value)
			max = list_a->next;
		list_a = list_a->next;
	}
	return max;
}

void assign_index(t_dlist *list_a)
{
	int index;
	t_dlist *max;
	t_dlist *min;

	index = 0;
	max = get_biggest(list_a);
	min = NULL;
	while (min != max)
	{
		min = get_smallest(list_a);
		min->index = index;
		index++;
	}
}