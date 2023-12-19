#include "push_swap.h"

void    free_split(char **argv)
{
    int i;

    i = 0;
    if (argv == NULL || *argv == NULL)
        return ;
    while (argv[i] != NULL)
    {
        free(argv[i]);
        i++;
    }
    free(argv);
}
void    ft_free_stack(t_stack **a)
{
    t_stack *tmp;
    t_stack *current;

    if (a == NULL)
        return;
    current = *a;
    while (current)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }
    *a = NULL;
}

void    ft_error_free(t_stack **a, char **argv, int flag)
{
    ft_free_stack(a);
    if (flag == 1)
    {
        free_split(argv);
    }
    write(2, "Error\n", 6);
    exit(1);
}
