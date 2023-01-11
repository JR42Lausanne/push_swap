
#include "push_swap.h"

void	init_process(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!check_input(argc, *argv))
		ft_error();
}

void	init_process2(char **str)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(*str);
	if (!check_input_process2(*str))
		ft_error();
	tab = malloc(sizeof(int) * size);
	while (tab)
	{
		tab[i] = ft_atoi_mod(str[i]);
		i++;
	}
	if (!check_double(tab, size))
		ft_error();
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}
