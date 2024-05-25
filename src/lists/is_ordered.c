/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:08:18 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:08:40 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

int8_t	is_ordered(t_dlist *list)
{
	while (list->next)
	{
		if (list->index - list->next->index != -1)
			return (0);
		list = list->next;
	}
	return (1);
}
