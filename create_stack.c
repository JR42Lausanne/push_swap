
#include "push_swap.h"

t_stack	*create_stack(t_parse *parse)
{
	int	*index_tab;
	t_stack	*a;
	int	i;
	int	j;
	int	count_above;

	a = NULL;
	index_tab = malloc(sizeof(int) * parse->size);
	if (!index_tab)
	{
		free_parse(parse);
		ft_error(__func__);
	}
	i = -1;
	while (++i < parse->size)
	{
		count_above = 0;
		j = -1;
		while (++j < parse->size)
			if (parse->array[i] > parse->array[j])
				count_above++;
		index_tab[i] = count_above;
	}
	i = -1;
	while (++i < parse->size)
		ft_printf("%d ", index_tab[i]);
	ft_printf("\n");
	return (a);
}
