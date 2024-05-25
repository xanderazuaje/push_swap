/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:03:18 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 14:55:55 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	lstclear(t_dlist *lst)
{
	if (!lst)
		return ;
	while (lst->next)
	{
		lst = lst->next;
		free(lst->prev);
	}
	free(lst);
}
