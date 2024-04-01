/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:58:33 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 07:23:57 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	skip_spaces(size_t *i, const char *str)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
	{
		*i += 1;
	}
}

static void	check_sign(size_t *i, const char *str, int *sign)
{
	if ((str[*i] == '-' || str[*i] == '+') && ft_isdigit(str[*i + 1]))
	{
		*sign = (str[*i] - 44) * -1;
		*i += 1;
	}
}

int	ft_atoi_del(char *str, t_automata *parser)
{
	int			res;
	int			sign;

	res = 0;
	sign = 1;
	skip_spaces(&parser->prev, str);
	check_sign(&parser->prev, str, &sign);
	while (str[parser->prev] && parser->prev != parser->curr
		&& ft_isdigit(str[parser->prev]))
	{
		res = (res * 10) + (str[parser->prev] - '0');
		parser->prev++;
	}
	parser->prev = parser->curr;
	return (res * sign);
}
