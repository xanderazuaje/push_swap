/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:24:34 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 07:01:00 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_parser.h"

void	ft_error(void *data, t_automata *automata)
{
	(void) data;
	clear_tree(automata->node);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
