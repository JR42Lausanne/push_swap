/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:32:27 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/23 16:43:00 by jlaiti           ###   ########.fr       */
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
		ft_printf("ra\nsa\n");
	else if (elem_0 == 1 && elem_1 == 0 && elem_2 == 2)
		ft_printf("rra\n");
	else if (elem_0 == 1 && elem_1 == 2 && elem_2 == 0)
		ft_printf("sa\n");
	else if (elem_0 == 2 && elem_1 == 0 && elem_2 == 1)
		ft_printf("rra\nsa\n");
	else if (elem_0 == 0 && elem_1 == 2 && elem_2 == 1)
		ft_printf("ra\n");
}
/*
void	little_sort_4_5(t_stack *a, t_stack *b)
{
	is_sorted(a);



}*/
