/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstshift.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 04:49:18 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 04:58:28 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_dlist	*lstshift(t_dlist *node, int value)
{
	t_dlist	*new_node;

	if (!node)
		return (NULL);
	while (node->prev)
		node = node->prev;
	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = node;
	node->prev = new_node;
	return (new_node);
}
