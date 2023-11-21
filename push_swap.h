/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:12:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:43 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//struct used for the push_swap

typedef struct s_list
{
    int *sa;
    int *sb;
}t_list;

// How to handle errors

// Movements instructions
    // Swap
void    ss(int *sa, int *sb);
void    sa(int *sa);
void    sb(int *sb);
    // Push
void    pa(t_list *l);
void    pb(t_list *l);

    // Rotate

#endif