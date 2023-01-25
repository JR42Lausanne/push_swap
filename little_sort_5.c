/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:32:27 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 16:50:10 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_position_0(int index, t_stack *a, t_stack **b)
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
		ra(a);
		ra(a);
		pb(&a, b);
	}
	else if (index == 3)
	{
		ra(a);
		pb(&a, b);
	}
	else if (index == 4)
		pb(&a, b);
}

static void	find_position_1(int index, t_stack *a, t_stack **b)
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
	{
		pb(&a, b);
	}
}

void	little_sort_5(t_stack *a, t_stack *b)
{	
	int	pos_0;
	int	pos_1;

	if (is_sorted(a))
		return ;
	pos_0 = find_index(a, 0);
	find_position_0(pos_0, a, &b);
	pos_1 = find_index(a, 1);
	find_position_1(pos_1, a, &b);
	little_sort_3(a);
	pa(&a, &b);
	pa(&a, &b);
}
