#include "push_swap.h"

void    rra(t_stack **a, int flag)
{
    t_stack *last_one_first_one;
    if (a == NULL || *a == NULL)
        return ;
    if (ft_stack_len(*a) < 2)
        return ;
    last_one_first_one = ft_find_last(*a);
    last_one_first_one->prev->next == NULL;
    last_one_first_one->next = *a;
    last_one_first_one->prev = NULL;
    *a = last_one_first_one;
    last_one_first_one->next->prev = last_one_first_one;
    if (flag == 1)
        write(1, "rra\n", 4);
}

void    rrb(t_stack **b, inf flag)
{
    t_stack *last_one_first_one;
    if (b == NULL || *b == NULL)
        return ;
    if (ft_stack_len(*b) < 2)
        return ;
    last_one_first_one = ft_find_last(*b);
    last_one_first_one->prev->next == NULL;
    last_one_first_one->next = *b;
    last_one_first_one->prev = NULL;
    *b = last_one_first_one;
    last_one_first_one->next->prev = last_one_first_one;
    if (flag == 1)
        write(1, "rra\n", 4);
}

void    rrr(t_stack **a, t_stack **b)
{
    rra(a, 0);
    rrb(b, 0);
    write (1, "rrr\n", 4);
}