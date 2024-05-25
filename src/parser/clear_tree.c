/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:56:55 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:52:00 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_parser.h"

void	clear_tree(t_btree *node)
{
	if (node == NULL)
		return ;
	clear_tree(node->left);
	clear_tree(node->right);
	free(node);
}
