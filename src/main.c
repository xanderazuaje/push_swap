/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:14:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/07/16 06:08:41 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	do_algo(t_central *lists)
{
	t_dlist	*back_pivot;

	chunk_separation(lists, count_list(lists->list_a));
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
	if (line == NULL)
		return (ft_putstr_fd("Error\n", 2), 0);
	parse_input(line, &lists.list_a);
	free(line);
	assign_index(lists.list_a);
	if (count_list(lists.list_a) <= 3)
		order_three(&lists);
	else
		do_algo(&lists);
	lstclear(lists.list_a);
	lstclear(lists.list_b);
	return (0);
}
