/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:13:55 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/29 12:57:05 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(t_stack **a, t_stack **b)
{
    t_stack *smallest_one;
    int len_a;
    
    len_a = ft_stack_len(*a);
    while (len_a-- > 3)
        pb(b, a);
    ft_sort_three(a);
    while(*b)
    {
        ft_info_nodes(*a, *b);
        ft_move_nodes(a, b);
    }
    ft_current_position(*a);
    smallest_one = ft_find_small(*a);
    if (smallest_one->above_median == 1)
        while(*a != smallest_one)
            ra(a, 1);
    else
        while (*a != smallest_one)
            rra(a, 1);
}