/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:03:18 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 06:19:38 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	lstclear(t_dlist *lst)
{
	if(!lst)
		return;
	while (lst->next)
	{
		lst = lst->next;
		free(lst->prev);
	}
	free(lst);
}
