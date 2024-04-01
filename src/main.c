/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 06:14:56 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 03:48:45 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*line;

	if (argc == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	else
	{
		line = merge_arguments(argc, argv);
		if (!line)
			return (ft_putstr_fd("Error\n", 2), 0);
	}
	is_input_valid(line);
	free(line);
	return (0);
}