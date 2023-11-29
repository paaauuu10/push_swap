#include "push_swap.h"

static int  ft_isnumber(char *argv)
{
    int i;

    if (argv[0] == "\0")
        return (0);
    i = 0;
    if ((argv[0] == '-' || argv[0] == '+') && argv[1])
        i = 1;
    while (argv[i] && (argv[i] >= '0' && argv[i] <= '9'))
        i++;
    if (argv[i] && (argv[i] < '0' && argv[i] > '9'))
        return (0);
    return (1); 
}

/*void ini_stack(t_stack **a, char **argv)
{
    long    num;
    while (*argv)
    {
        if (check_num(*argv));


    }
}*/