/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:12:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/29 12:57:03 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//revisar librerias necesarias

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

//struct used for the push_swap

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack  *next;
    struct s_stack  *prev;   
    }   t_stack;

// How to handle errors

// Movements instructions
    // Swap
void    ss(t_stack **a, t_stack **b);
void    sa(t_stack **a, int flag);
void    sb(t_stack **b, int flag);
    // Push
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);

    // Rotate
void    ra(t_stack **a, int flag);
void    rb(t_stack **b, int flag);
void    rr(t_stack **a, t_stack **b);

    // Reverse rotate
void	rra(t_stack **a, int flag);
void	rrb(t_stack **b, int flag);
void	rrr(t_stack **a, t_stack **b);



int main(int argc, char **argv)
#endif