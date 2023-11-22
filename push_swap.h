/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:12:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/22 12:30:53 by pbotargu         ###   ########.fr       */
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
    struct s_stack   *next;
    }t_stack;

// How to handle errors

// Movements instructions
    // Swap
void    ss(t_stack *a, t_stack *b);
void    sa(t_stack *a);
void    sb(t_stack *b);
    // Push
void    pa(t_list *l);
void    pb(t_list *l);

    // Rotate


int main(int argc, char **argv)
#endif