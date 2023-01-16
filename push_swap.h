/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:22:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/14 16:10:45 by jlaiti           ###   ########.fr       */
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

typedef struct s_parse
{
	int		size;
	char	**tab_str;
	int		*array;

}		t_parse;

/*
typedef struct s_stack
{
	int				index;
	int				value;
	struct s_stack	*next;
}					t_stack;
*/

typedef t_list	t_stack;

void	init_process(t_parse *parse);
void	ft_error(const char *err_func);
int		check_input_process(char *str);
int		ft_atoi_mod(char *str);
int		check_double(t_parse *parse);
void	free_parse(t_parse *parse);
t_stack	*parse_input(int argc, char *argv[]);
t_stack	*create_stack(t_parse *parse);

#endif
