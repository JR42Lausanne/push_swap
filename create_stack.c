/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:40:48 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 10:03:34 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(t_parse *parse)
{
	int			*index_tab;
	t_stack		*a;
	int			i;
	int			j;
	int			count_above;

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
		ft_lstadd_back(&a, ft_lstnew(&index_tab[i]));
	return (a);
}
