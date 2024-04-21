/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:01:23 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/19 07:39:29 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_dlist	*lstnew(int value)
{
	t_dlist	*new_list;

	new_list = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_list)
		return (0);
	new_list->value = value;
	new_list->next = NULL;
	new_list->index = -1;
	new_list->weight = -1;
	return (new_list);
}
