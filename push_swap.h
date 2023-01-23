/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:22:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/23 17:18:10 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INTMAX +2147483647
# define INTMIN -2147483648

# ifndef DEBUG
#  define DEBUG 0
# endif

# define print_stack(stack) print_stack_big(stack, #stack);

typedef struct s_parse
{
	int		size;
	char	**tab_str;
	int		*array;

}		t_parse;

typedef t_list	t_stack;

// Parsing
void	init_process(t_parse *parse);
void	ft_error(const char *err_func);
int		check_input_process(char *str);
int		ft_atoi_mod(char *str);
int		check_double(t_parse *parse);
void	free_parse(t_parse *parse);
t_stack	*parse_input(int argc, char *argv[]);

// Create Linked list
t_stack	*create_stack(t_parse *parse);

// Sort
void	check_sort(t_stack *a, t_stack *b);
void	big_sort(t_stack *a, t_stack *b, int size);

// Operations
void	ra(t_stack *a);
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);

// Type of sort
void	little_sort_3(t_stack *a);
void	little_sort_4_5(t_stack *a, t_stack *b, int size);
int		is_sorted(t_stack *a);


// Printing
void	print_stack_big(t_stack *stack, char *stack_name);
#endif
