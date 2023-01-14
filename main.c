/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:20 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/14 15:41:41 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_parse	parse;

	if (argc == 2)
	{	
		parse.size = 0;
		parse.tab_str = ft_split(argv[1], ' ');
		while (parse.tab_str[parse.size] != 0)
			parse.size++;
		init_process(parse);
	}
	else if (argc > 2)
	{
		parse.size = (argc - 1);
		parse.tab_str = (argv + 1);
		init_process(parse);
	}
	else
		ft_error(__func__);
	return (0);
}
