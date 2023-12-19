#include "push_swap.h"

int ft_syntax_error(char *s)
{
    if (!(*s == '+' || *s == '-' || (*s >= '0' && *s <= '9')))
        return (1);
    if (*s == '+' || *s == '-')
        s++;
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (1);
        s++;
    }
    return (0);
}

int ft_find_repetition(t_stack *a, int nbr)
{
    if (a == NULL)
        return (0);
    while (a)
    {
        if (a->value == nbr)
            return (1);
        a = a->next;
    }
    return (0);
}