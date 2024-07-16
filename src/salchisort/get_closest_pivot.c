/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_closest_pivot.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:28:37 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 17:11:02 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "salchisort.h"

void	travel(t_dlist *list, int pivot, t_traveler *traveler)
{
	while (list)
	{
		if (traveler->start == NULL && list->index < pivot)
		{
			traveler->up = traveler->total;
			traveler->start = list;
		}
		if (list->index < pivot)
		{
			traveler->down = traveler->total;
			traveler->end = list;
		}
		traveler->total++;
		list = list->next;
	}
}

t_dlist	*get_closest_pivot(t_dlist *list, int pivot, int *dir)
{
	t_traveler	traveler;

	traveler.start = NULL;
	traveler.up = 0;
	traveler.down = 0;
	traveler.total = 0;
	travel(list, pivot, &traveler);
	traveler.down = traveler.total - traveler.down;
	if (traveler.up < traveler.down && traveler.start)
	{
		*dir = 1;
		return (traveler.start);
	}
	*dir = -1;
	return (traveler.end);
}
