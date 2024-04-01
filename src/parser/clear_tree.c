/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:56:55 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 06:56:55 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_parser.h"

void	clear_tree(t_btree *first_node)
{
	t_btree	*node;

	node = first_node;
	while (1)
	{
		if (node->left != NULL)
			node = node->left;
		else if (node->right != NULL)
			node = node->right;
		else
		{
			if (node->parent == NULL)
			{
				free(node);
				return ;
			}
			node = node->parent;
			free(node->left);
			free(node->right);
			node->left = NULL;
			node->right = NULL;
		}
	}
}
