/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:36:56 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:36:56 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "salchisort.h"

void	order_three(t_central *list)
{
	while (!is_ordered(list->list_a))
	{
		if (list->list_a->index == 2)
			ra(list);
		if (list->list_a->index == 0 && list->list_a->next->index == 2)
			rra(list);
		if (list->list_a->index == 1 && list->list_a->next->index == 0)
			sa(list);
		if (list->list_a->index == 1 && list->list_a->next->index == 2)
			rra(list);
	}
}
