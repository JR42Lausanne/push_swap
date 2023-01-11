
#include "push_swap.h"
/*
void	init_process(int argc, char *argv[])
{
//	t_stack	*stack_a;
//	t_stack	*stack_b;

	if (!check_input(argc, *argv))
		ft_error();
}
*/
void	init_process2(char **str, int size)
{
	int	*tab;
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!check_input_process2(str[i]))
			ft_error();
		i++;
	}
	i = 0;
	tab = malloc(sizeof(int) * size);
	while (str[i] != 0)
	{
		tab[i] = ft_atoi_mod(str[i]);
		i++;
	}
	if (!check_double(tab, size))
		ft_error();
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}
