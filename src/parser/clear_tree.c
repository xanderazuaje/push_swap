/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:56:55 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/04 03:59:27 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_parser.h"

static void	prune(t_btree *node, char dir)
{
	if (dir == 'L')
	{
		free(node->left);
		node->left = NULL;
	}
	else
	{
		free(node->right);
		node->right = NULL;
	}
}

void	clear_tree(t_btree *first_node)
{
	t_btree	*node;
	char	dir;

	node = first_node;
	dir = 'L';
	while (1)
	{
		if (node->left != NULL)
		{
			node = node->left;
			dir = 'L';
		}
		else if (node->right != NULL)
		{
			node = node->right;
			dir = 'R';
		}
		else
		{
			if (node->parent == NULL)
				return (free(node));
			node = node->parent;
			prune(node, dir);
		}
	}
}
