/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salchisort.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:16:23 by xander            #+#    #+#             */
/*   Updated: 2024/05/25 16:30:45 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by xander on 5/25/24.
//

#ifndef SALCHISORT_H
# define SALCHISORT_H

# include "../lists/lists.h"
# include "../weighter/weighter.h"
# include "../movements/movements.h"

typedef struct s_traveler
{
	t_dlist	*start;
	t_dlist	*end;
	int		up;
	int		down;
	int		total;
}	t_traveler;

t_dlist	*next_pivot(t_central *lists);
int8_t	get_distances(t_dlist *list);
t_dlist	*get_closest_pivot(t_dlist *list, int pivot, int *dir);
int8_t	has_smth_to_push(t_dlist *list, int pivot);
void	chunk_separation(t_central *lists, int argc);
void	order_three(t_central *list);

#endif
