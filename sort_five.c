#include "push_swap.h"

void    ft_sort_five(t_stack **a, t_stack **b)
{
    t_stack *min_node;
    int min_val;
    int i;

    i = 0;
    while (i < 2)
    {
        min_node = ft_find_small(*a);
        min_val = min_node->value;
        if (min_node == ft_find_last(*a))
            rra(a, 1);
        if ((*a)->value > min_val)
            ra(a, 1);
        else
        {
            pb(b, a);
            i++;
        }
    }
    ft_sort_three(a);
    pa(a, b);
    pa(a, b);
}