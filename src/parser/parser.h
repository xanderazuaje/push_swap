/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:52:29 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/05/25 15:50:15 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../lists/lists.h"

int		parse_input(char *input, t_dlist **list);
char	*merge_arguments(int argc, char **argv);

#endif
