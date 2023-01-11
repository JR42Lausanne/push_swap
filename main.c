
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
		init_process2(tab_str, size);
	}
	else
		write(1, "\n", 1);
	return (0);
}
/*
		if (argc > 2)
		{
			init_process(argc - 1, argv + 1);
		}	
		else
		{
		str = ft_split(argv[1], ' ');

*/
