/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_distances.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:27:59 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 17:13:42 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "salchisort.h"

int8_t	get_distances(t_dlist *list)
{
	int		up;
	int		down;
	t_dlist	*i;
	t_dlist	*j;

	up = 0;
	down = 1;
	i = list;
	j = list;
	while (i || j)
	{
		if (i)
		{
			up++;
			i = i->prev;
		}
		if (j)
		{
			j = j->next;
			down++;
		}
	}
	if (up <= down)
		return (1);
	return (-1);
}
