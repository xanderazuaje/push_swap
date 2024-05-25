/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:20:59 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:42:16 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_parser.h"
#define L 0
#define R 1

static t_bool	alloc_node(t_btree *node, const int8_t dir)
{
	t_btree	*child;

	child = (t_btree *) ft_calloc(1, sizeof (t_btree));
	if (!child)
	{
		return (FALSE);
	}
	child->parent = node;
	if (dir == L)
		node->left = child;
	else
		node->right = child;
	return (TRUE);
}

static void	assign_node(int value, t_btree **node, t_automata *automata)
{
	if (value < (*node)->value)
	{
		if (!(*node)->left)
			if (!alloc_node(*node, L))
				ft_error(NULL, automata);
		*node = (*node)->left;
	}
	else if (value > (*node)->value)
	{
		if (!(*node)->right)
			if (!alloc_node(*node, R))
				ft_error(NULL, automata);
		*node = (*node)->right;
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
		if (!node->settled)
		{
			node->value = value;
			node->settled = TRUE;
			if (!automata->list_start)
				automata->list_start = lstnew(value);
			else
				lstappend(automata->list_start, value);
			return ;
		}
		if (node->value == value)
			ft_error(NULL, automata);
		else
			assign_node(value, &node, automata);
	}
}
