
#include "push_swap.h"

void	free_parse(t_parse *parse)
{
	int	i;

	i = -1;
	if (parse->tab_str)
	{
		while (parse->tab_str[++i])
			free(parse->tab_str[i]);
		free(parse->tab_str);
	}
	free(parse->array);
}

t_stack	*parse_input(int argc, char *argv[])
{
	t_parse	parse;
	t_stack	*a;

	if (argc == 2)
	{
		parse.size = 0;
		parse.tab_str = ft_split(argv[1], ' ');
		while (parse.tab_str[parse.size] != 0)
			parse.size++;
		init_process(&parse);
	}
	else if (argc > 2)
	{
		parse.size = (argc - 1);
		parse.tab_str = (argv + 1);
		init_process(&parse);
		parse.tab_str = NULL;
	}
	else
		ft_error(__func__);
	a = create_stack(&parse);
	free_parse(&parse);
	return (a);
}
