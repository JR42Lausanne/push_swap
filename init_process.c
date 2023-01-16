/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:22:56 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/14 16:16:45 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_process(t_parse *parse)
{
	int	i;

	i = 0;
	while (parse->tab_str[i] != 0)
	{
		if (!check_input_process(parse->tab_str[i]))
			ft_error(__func__);
		i++;
	}
	i = 0;
	parse->array = malloc(sizeof(int) * parse->size);
	while (parse->tab_str[i] != 0)
	{
		parse->array[i] = ft_atoi_mod(parse->tab_str[i]);
		i++;
	}
	if (!check_double(parse))
		ft_error(__func__);
	i = 0;
	while (i < parse->size)
	{
		printf("%d\n", parse->array[i]);
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
