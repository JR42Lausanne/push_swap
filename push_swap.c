/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:34:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/06 15:37:42 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		init_process(argv[1]);
	}
	else
	{
		perror("Need argument to run");
		exit(EXIT_FAILURE);
	}
	return (0);
}

int	init_process(int[])
{
	check_type(int[]); 

int	error(void)
{
	ft_putendl_fd("Error", 2);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack_list	*stack;
	char			**str;
	int				i;

	i = 0;
	if (ac >= 2)
	{
		if (ac > 2)
			stack = init_stack(av + 1, ac - 1);
		else
		{
			str = ft_split(av[1], ' ');
			while (str[i])
				i++;
			stack = init_stack(str, i);
		}
		if (! stack)
			exit(error());
		sort(stack);
		clean_stack(stack);
	}
}
