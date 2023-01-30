/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:41:09 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/30 14:14:54 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (0);
	a = create_stack(&parse);
	free_parse(&parse);
	return (a);
}
