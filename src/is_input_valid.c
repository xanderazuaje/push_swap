/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 03:40:12 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 07:23:34 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_parser(t_automata *parser)
{
	parser->curr = 0;
	parser->prev = 0;
	parser->curr_state = INIT;
	parser->prev_state = INIT;
	parser->node = ft_calloc(1, sizeof (t_btree));
	if (!parser->node)
		ft_error(NULL, NULL);
}

int	is_input_valid(char *input)
{
	t_automata	parser;
	void		(*fn)(void *data, t_automata *automata);

	init_parser(&parser);
	while (input[parser.curr] != '\0')
	{
		if (ft_isdigit(input[parser.curr]))
			parser.curr_state = NUMB;
		else if (input[parser.curr] == ' ')
			parser.curr_state = SPAC;
		else if (input[parser.curr] == '-' || input [parser.curr] == '+')
			parser.curr_state = SIGN;
		else
			parser.curr_state = ERRO;
		fn = exec_func(parser.prev_state, parser.curr_state);
		if (fn)
			fn(input, &parser);
		parser.prev_state = parser.curr_state;
		parser.curr++;
	}
	clear_tree(parser.node);
	return (1);
}
