/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:54:25 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 03:13:54 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	(*exec_func(size_t prev, size_t curr))(void *data, t_automata *automata)
{
	void	(*fns[5][5])(void *data, t_automata *automata) = {
	{ft_error, ft_error, NULL, NULL, NULL},
	{ft_error, ft_error, ft_error, ft_error, ft_error},
	{ft_error, ft_error, NULL, add_node, ft_error},
	{ft_error, ft_error, NULL, NULL, NULL},
	{ft_error, ft_error, NULL, ft_error, ft_error},
	};

	return (fns[prev][curr]);
}
