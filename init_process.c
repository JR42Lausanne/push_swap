
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
	t_stack *stack_a;
	t_stack *stack_b;

	if (!check_input2(str))
		ft_error();

}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}
