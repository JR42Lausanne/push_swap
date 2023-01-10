#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				index;
	int				value;
	struct s_stack	*next;
}					t_stack;

int	check_input(char *argv[]);




#endif
