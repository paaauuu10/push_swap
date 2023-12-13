#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL; 
    if (argc == 1)
        return (1);
    else if (argc == 2 && argv[1][0] == '\0')
        return (1);
    else if (argc == 2)
        argv = ft_split(argv[1], ' ');
    init_stack(&a, argv, argc == 2)
    if (!(ft_is_sorted(a)))
    {
        if (stack_len(a) == 2)
            sa(&a, 1);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else if (stack_len(a) == 5)
            sort_five(&a, &b);
        else
            push_swap(&a, &b);
    }
    ft_free_stack(&a);
}


