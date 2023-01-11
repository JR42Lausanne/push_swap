#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INTMAX +2147483647
# define INTMIN -2147483648

typedef struct s_stack
{
	int				index;
	int				value;
	struct s_stack	*next;
}					t_stack;

void	init_process(int argc, char *argv[]);
void	init_process2(char **str);
void	ft_error(void);
int		check_input(int argc, char *argv);
int		check_input_process2(char *str);
int		is_correct_input(int val);
int		ft_atoi_mod(char *str);
void	ft_exit_process(void);
int		check_space_and_sign(char *str);
#endif
