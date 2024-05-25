/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:26:06 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:26:14 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "salchisort.h"

t_dlist	*next_pivot(t_central *lists)
{
	t_dlist	*i;

	i = lists->list_b;
	while (i)
	{
		if (i->index == lists->list_a->index - 1)
			return (i);
		i = i->next;
	}
	return (lists->list_b);
}
