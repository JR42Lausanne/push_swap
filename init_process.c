
#include "push_swap.h"

void	init_process(char **str, int size)
{
	int	*tab;
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!check_input_process(str[i]))
			ft_error(__func__);
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
		ft_error(__func__);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

void	ft_error(const char *err_func)
{
	write(2, "Error\n", 6);
	if (DEBUG == 1)
		ft_printf("-> %s\n", err_func);
	exit(EXIT_FAILURE);
}
