/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:32:27 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/24 17:30:31 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little_sort_3(t_stack *a)
{
	int	elem_0;
	int	elem_1;
	int	elem_2;

	elem_0 = *(int *) a->content;
	elem_1 = *(int *) a->next->content;
	elem_2 = *(int *) a->next->next->content;
	if (is_sorted(a))
		return ;
	if (elem_0 == 0 && elem_1 == 1 && elem_2 == 2)
	{
		rra(a);
		sa(a);
	}
	else if (elem_0 == 1 && elem_1 == 0 && elem_2 == 2)
		rra(a);
	else if (elem_0 == 1 && elem_1 == 2 && elem_2 == 0)
	{
		ra(a);
		sa(a);
	}
	else if (elem_0 == 2 && elem_1 == 0 && elem_2 == 1)
		sa(a);
	else if (elem_0 == 0 && elem_1 == 2 && elem_2 == 1)
		ra(a);
}

static int	find_index(t_stack *a, int to_find)
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
/*
static void	move_to_b(int index, int size, int *pos_1, t_stack *a)
{
	if (index >= 2)
	{
		while (index-- != -1)
		{
			//ft_printf("ra\n");
			*pos_1 -= 1;
		}
	}
	else
	{
		while (index++ < size)
		{
			//ft_printf("rra\n");
			*pos_1 += 1;
		}
	}
	ft_printf("pb\n");
}
*/

static void	find_position_zero(int index, t_stack *a, t_stack *b)
{
	if (index == 0)
		pb(&a, &b);
	else if (index == 1)
	{
		sa(a);
		pb(&a, &b);
	}
	else if (index == 2)
	{
		rra(a);
		sa(a);
		pb(&a, &b);
	}
	else if (index == 3)
	{	
		ra(a);
		ra(a);
		pb(&a, &b);
	}
	else if (index == 4)
	{
		ra(a);
		pb(&a, &b);
	}
}

static void	find_position_one(int index, t_stack *a, t_stack *b)
{
	if (index == 0)
		pb(&a, &b);
	else if (index == 1)
	{
		sa(a);
		pb(&a, &b);
	}
	else if (index == 2)
	{
		ra(a);
		ra(a);
		pb(&a, &b);
	}
	else if (index == 3)
	{
		ra(a);
		pb(&a, &b);
	}
}

void	little_sort_4_5(t_stack *a, t_stack *b, int size)
{	
	int	pos_0;
	int	pos_1;

	if (is_sorted(a))
		return ;
	pos_0 = find_index(a, 0);
	//printf("pos_0->%d\n", pos_0);
	if (size == 5)
		pos_1 = find_index(a, 1);
	//printf("pos_1->%d", pos_1);
	find_position_zero(pos_0, a, b);
	if (size == 5)
		find_position_one(pos_1, a, b);
	little_sort_3(a);
	pa(&a, &b);
	if (size == 5)
		pa(&a, &b);
	//move_to_b(pos_0, size, &pos_1);
	//move_to_b(pos_1, size, &pos_1);
	//little_sort_3(a);
	//little_sort_3(b);
}
