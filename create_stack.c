/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:40:48 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/30 11:30:12 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_index_tab(t_parse	*parse)
{
	free_parse(parse);
	ft_error(__func__);
}

static t_stack	*create_stack_util(t_parse *parse, int **index_tab)
{
	int		i;
	t_stack	*a;

	a = NULL;
	i = -1;
	while (++i < parse->size)
		ft_lstadd_front(&a, ft_lstnew(index_tab[i]));
	return (a);
}

t_stack	*create_stack(t_parse *parse)
{
	int			**index_tab;
	t_stack		*a;
	int			i;
	int			j;
	int			count_above;

	a = NULL;
	index_tab = malloc(sizeof(int *) * parse->size);
	if (!index_tab)
		error_index_tab(parse);
	i = -1;
	while (++i < parse->size)
	{
		count_above = 0;
		j = -1;
		while (++j < parse->size)
			if (parse->array[i] > parse->array[j])
				count_above++;
		index_tab[i] = malloc(sizeof(int));
		*index_tab[i] = count_above;
	}
	a = create_stack_util(parse, index_tab);
	free(index_tab);
	return (a);
}
