/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:37 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/22 12:33:53 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(int *a, int *b)
{
    int aux;
    
    aux = *a;
    *a = *b;
    *b = aux;
}
void    sa(t_stack *a)
{
    swap(&a->value, &a->next->value);
    write(1, "sa\n", 3);
}

void    sb(t_stack *b)
{
    swap(&b->value, &b->next->value);
    write(1, "sb\n", 3);
}

void    ss(t_stack *a, t_stack *b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}