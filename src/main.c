/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:14:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 17:14:58 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	do_algo(int argc, t_central *lists)
{
	t_dlist	*back_pivot;

	chunk_separation(lists, argc);
	while ((*lists).list_b)
	{
		back_pivot = next_pivot(lists);
		if (get_distances(back_pivot) == 1)
			while ((*lists).list_b != back_pivot)
				rb(lists);
		else
			while ((*lists).list_b != back_pivot)
				rrb(lists);
		pa(lists);
	}
}

int	main(int argc, char **argv)
{
	char		*line;
	t_central	lists;

	lists.list_a = NULL;
	lists.list_b = NULL;
	if (argc == 1)
		return (ft_putstr_fd("Error\n", 2), 0);
	line = merge_arguments(argc, argv);
	if (!line)
		return (ft_putstr_fd("Error\n", 2), 0);
	parse_input(line, &lists.list_a);
	assign_index(lists.list_a);
	if (argc <= 4)
		order_three(&lists);
	else
	{
		do_algo(argc, &lists);
	}
	lstclear(lists.list_a);
	lstclear(lists.list_b);
	free(line);
	return (0);
}
