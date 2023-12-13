#include "push_swap.h"

int stack_len(t_stack *a)
{
    int i;

    i = 0;
    while(a)
    {
        i++;
        a = a->next;
    }
    return (i);
}

int ft_is_sorted(t_stack *a)
{
    while (a->next)
    {
        if (a->value > a->next_value)
            return (0);
        a = a->next;
    }
    return (1);
}

