/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:12:52 by pbotargu          #+#    #+#             */
/*   Updated: 2023/11/29 12:57:03 by pbotargu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//revisar librerias necesarias

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

//struct used for the push_swap

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack  *next;
    struct s_stack  *prev;   
    }   t_stack;

// Split
char	**ft_split(char const *s, char c);
char	**createwords(char const *s, char c, char **split);
int     checkwords(char const *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
static char	**ft_free(char **split, size_t i);

// Initialize stack
void    ft_init_stack(t_stack *a, char **argv, bool flag);
int ft_syntax_error(char *s);
static long ft_atol(const char **str);
int ft_find_repetition(t_stack *a, int nbr);
void    ft_add_to_final(t_stack *stack_a, int nbr);
t_stack *ft_find_last(t_stack *stack_a);

// Stack utils
int ft_is_sorted(t_stack *a);
int ft_stack_len(t_stack *a);s

// Free and error
void    ft_error_free(t_stack **a, char **argv, bool flag);
void    free_stack(t_stack **a);
void    free_split(char **argv);

// How to handle errors
int ft_syntax_error(char *s);
int ft_find_repetition(t_stack *a, int nbr);

// Sort three
void ft_sort_three(t_stack **a);
static t_stack *find_big_one(t_stack *a);

// Movements instructions
    // Swap
void    sa(t_stack **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);

    // Push
void    pb(t_stack **b, t_stack **a);
void    pa(t_stack **a, t_stack **b);

    // Rotate
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);

    // Reverse rotate
void	rra(t_stack **a, int flag);
void	rrb(t_stack **b, int flag);
void	rrr(t_stack **a, t_stack **b);



#endif