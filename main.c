
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		size;
	char	**str;

	if (argc  >= 2)
	{
		if (argc > 2)
		{
			init_process(argc - 1, argv + 1);
		}	
		else
		{
			str = ft_split(argv[1], ' ');
			init_process2(str);
		}
	}
	else
		ft_error(void);
}
