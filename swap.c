/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:37 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/21 14:03:17 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(int *sa)
{
    int tmp;
    
    tmp == sa[0];
    sa[0] == sa[1];
    sa[1] == tmp;
    write(1, "sa\n", 3);
}

void    sb(int *sb)
{
    int tmp;
    
    tmp == sb[0];
    sb[0] == sb[1];
    sb[1] == tmp;
    write(1, "sb\n", 3);
}

void    ss(int *sa, int *sb)
{
    int tmp;

    tmp == sa[0];
    sa[0] == sa[1];
    sa[1] == tmp;
    tmp == sb[0];
    sb[0] == sb[1];
    sb[1] == tmp;
    write(1, "ss\n", 3);
}