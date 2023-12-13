#include "push_swap.h"

static long ft_atol(const char **str)
{
    int i;
    int negative;
    long    num;

    i = 0;
    negative = 1;
    num = 0;
    while (str[i] (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
        i++;
    if (str[i] = '+')
        i++;
    else if (str[i] == '-')
    {
        negative = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0')
        i++;
    }
    return (num * negative);
    
}

void    ft_init_stack(t_stack *a, char **argv, bool flag)
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
        ft_add_to_final(a, (int)nbr);
        i++;
    }
    if (flag)
        free_split(argv);
}
