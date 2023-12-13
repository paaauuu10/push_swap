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

t_stack *ft_find_last(t_stack *stack_a)
{
    if (stack_a == NULL)
        return (NULL);
    while (stack_a->next != NULL)
    {
        stack_a = stack_a->next;
    }
    return (stack_a);
}

void    ft_add_to_final(t_stack *stack_a, int nbr)
{
    t_stack *node;
    t_stack *last_node;

    if (stack_a = NULL)
        return ;
    node = malloc(sizeof(t_stack));
    if (node == NULL)
        return ;
    node->next = NULL;
    node->value = nbr;
    if (*stack == NULL)
    {
        *stack_a = node;
        node->prev = NULL;
    }
    else
    {
        last_node = ft_find_last(*stack_a);
        last_node->next = node;
        node->prev = last_node;
    }
}