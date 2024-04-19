/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:01:23 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 05:29:33 by xazuaje-         ###   ########.fr       */
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
	return (new_list);
}
