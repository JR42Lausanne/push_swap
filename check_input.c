
#include "push_swap.h"

int	check_input(int argc, char *argv)
{
	



}

int	check_input2(char **str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!is_correct_input(ft_atoi(str[i])))
			return (0);
		i++;
	}
	return (1);
}
