/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:24:34 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 03:50:57 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void *data, t_automata *automata)
{
	(void) data;
	(void) automata;
	ft_putstr_fd("Error\n", 2);
	exit(1);
}