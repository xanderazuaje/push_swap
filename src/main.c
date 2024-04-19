/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:14:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 06:21:06 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	char	*line;
	t_dlist *list;

	list = NULL;
	if (argc == 1)
		return (ft_putstr_fd("Error\n", 2), 0);
	line = merge_arguments(argc, argv);
	if (!line)
		return (ft_putstr_fd("Error\n", 2), 0);
	parse_input(line, &list);
	free(line);
	return (0);
}
