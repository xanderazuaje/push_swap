/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:53:18 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 05:28:48 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_dlist	*lstappend(t_dlist *node, int value)
{
	t_dlist	*new_node;

	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	new_node->prev = node;
	node->next = new_node;
	return (new_node);
}
