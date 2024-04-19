/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:26:58 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 05:33:57 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PARSER_H
# define _PARSER_H

# define INIT 0
# define ERRO 1
# define NUMB 2
# define SPAC 3
# define SIGN 4

# include "../../lib/libft/libft.h"
#include "../lists/lists.h"

typedef struct s_btree
{
	int				value;
	t_bool			settled;
	struct s_btree	*left;
	struct s_btree	*right;
	struct s_btree	*parent;
}	t_btree;

typedef struct s_automata
{
	size_t	prev;
	size_t	curr;
	t_btree	*tree;
	int		curr_state;
	int		prev_state;
	t_btree	*node;
	t_dlist *list_start;
}	t_automata;

void	ft_error(void *data, t_automata *automata);
int		ft_atoi_del(char *str, t_automata *parser);
void	(*exec_func(size_t prev, size_t curr))(void *data,
			t_automata *automata);
char	*merge_arguments(int argc, char **argv);
int		parse_input(char *input, t_dlist **list);
void	add_node(void *data, t_automata *automata);
void	clear_tree(t_btree *first_node);

#endif
