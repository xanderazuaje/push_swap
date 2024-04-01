/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:20:59 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 06:48:05 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define L 0
#define R 1

static t_bool	alloc_node(t_btree **node, const int8_t dir)
{
	t_btree	*child;

	child = (t_btree *) ft_calloc(1, sizeof (t_btree));
	if (!child)
	{
		return (FALSE);
	}
	child->parent = *node;
	if (dir == L)
		(*node)->left = child;
	else
		(*node)->right = child;
	return (TRUE);
}

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

void	add_node(void *data, t_automata *automata)
{
	t_btree	*node;
	int		value;
	(void) data;


	value = ft_atoi_del(data, automata);
	node = automata->node;
	while (1)
	{
		if (node->settled == 0)
		{
			node->value = value;
			node->settled = TRUE;
			return ;
		}
		if (node->value == value)
		{
			clear_tree(automata->node);
			ft_error(NULL, NULL);
		}
		else if (value < node->value)
		{
			if(!node->left)
				if (!alloc_node(&node, L))
					ft_error(NULL, NULL);
			node = node->left;
		}
		else if (value > node->value)
		{
			if(!node->right)
				if (!alloc_node(&node, R))
					ft_error(NULL, NULL);
			node = node->right;
		}
	}
}
