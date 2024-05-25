/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighter.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 06:50:19 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:03:57 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEIGHTER_H
# define WEIGHTER_H

# include "../lists/lists.h"
# include <limits.h>

void	assign_index(t_dlist *list_a);
int		get_max_index(t_dlist *list);
int		get_min_index(t_dlist *list);

#endif
