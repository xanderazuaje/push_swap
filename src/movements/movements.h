/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 06:51:57 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/04/05 08:07:50 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_MOVEMENTS_H
# define PUSH_SWAP_MOVEMENTS_H

# include "../lists/lists.h"
# include "../../lib/libft/libft.h"

void sa(t_dlist **list_a);
void sb(t_dlist **list_b);
void ss(t_dlist **list_a, t_dlist **list_b);
void pa(t_dlist **list_a, t_dlist **list_b);
void pb(t_dlist **list_a, t_dlist **list_b);
void ra(t_dlist **list_a);
void rb(t_dlist **list_b);
void rr(t_dlist **list_a, t_dlist **list_b);
void rra(t_dlist **list_a);
void rrb(t_dlist **list_b);
void rrr(t_dlist **list_a, t_dlist **list_b);
#endif
