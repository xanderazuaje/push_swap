/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighter.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xander <xander@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 06:50:19 by xander            #+#    #+#             */
/*   Updated: 2024/04/19 07:48:28 by xander           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEIGHTER_H
#define WEIGHTER_H

# include "../lists/lists.h"

void weight_list(t_dlist *list_a, t_dlist *list_b);
void assign_index(t_dlist *list_a);
void assign_weight(t_dlist *node, t_dlist *list_a);

#endif
