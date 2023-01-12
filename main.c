
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**tab_str;
	int		size;

	if (argc == 2)
	{	
		size = 0;
		tab_str = ft_split(argv[1], ' ');
		while (tab_str[size] != 0)
			size++;
		init_process(tab_str, size);
	}
	else if (argc > 2)
		init_process(argv + 1, argc - 1);
	else
		ft_error(__func__);
	return (0);
}
