/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 03:34:11 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/01 03:50:31 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*merge_arguments(int argc, char **argv)
{
	char	*line;
	char	*to_free;

	line = NULL;
	while (argc > 1)
	{
		to_free = line;
		line = ft_strjoin(argv[argc - 1], line);
		free(to_free);
		to_free = line;
		line = ft_strjoin(" ", line);
		free(to_free);
		argc--;
	}
	to_free = line;
	line = ft_strjoin(line, " ");
	free(to_free);
	return (line);
}
