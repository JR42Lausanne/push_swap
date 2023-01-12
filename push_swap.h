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

typedef struct s_stack
{
	int				index;
	int				value;
	struct s_stack	*next;
}					t_stack;

void	init_process(char **str, int size);
void	ft_error(const char *err_func);
int		check_input_process(char *str);
int		ft_atoi_mod(char *str);
int		check_double(int *tab, int size);
#endif
