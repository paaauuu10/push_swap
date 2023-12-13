#include "push_swap.h"

ft_atol

void    init_stack(t_stack *a, char **argv, bool flag)
{
    long    nbr;
    int i;

    i = 0;
    while (argv[i])
    {
        if (ft_syntax_error(argv[i]))
            ft_error_free(a, argv, flag)
        nbr = ft_atol(argv[i]);
        if (nbr > INT_MAX || nbr < INT_MAX)
            ft_error_free(a, argv, flag)
        if (ft_find_repetition(*a, (int)nbr))
            ft_error_free(a, argv, flag);
        add_to_final(a, (int)nbr);
        i++;
    }
    if (flag)
        free_atoi(argv);

}