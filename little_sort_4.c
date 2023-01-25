/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:30:12 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 16:56:18 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_stack *a, int to_find)
{
	int	i;

	i = 0;
	while (a)
	{
		if (*(int *)a->content == to_find)
			return (i);
		a = a->next;
		i++;
	}
	ft_error(__func__);
	return (-1);
}

static void	find_position_3(int index, t_stack *a, t_stack **b)
{
	if (index == 0)
	{
		rra(a);
		pb(&a, b);
	}
	else if (index == 1)
	{
		rra(a);
		rra(a);
		pb(&a, b);
	}
	else if (index == 2)
	{
		sa(a);
		pb(&a, b);
	}
	else if (index == 3)
		pb(&a, b);
}

void	little_sort_4(t_stack *a, t_stack *b)
{
	int	pos_0;

	if (is_sorted(a))
		return ;
	pos_0 = find_index(a, 0);
	find_position_3(pos_0, a, &b);
	little_sort_3(a);
	pa(&a, &b);
}
