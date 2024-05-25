/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maxmin_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:56:19 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:01:50 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weighter.h"

int	get_max_index(t_dlist *list)
{
	int	max;

	max = INT_MIN;
	while (list)
	{
		if (list->index > max)
			max = list->index;
		list = list->next;
	}
	return (max);
}

int	get_min_index(t_dlist *list)
{
	int	min;

	min = INT_MAX;
	while (list)
	{
		if (list->index < min)
			min = list->index;
		list = list->next;
	}
	return (min);
}
