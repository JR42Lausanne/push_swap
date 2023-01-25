/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:56:06 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 16:54:08 by jlaiti           ###   ########.fr       */
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
	if ((elem_0 < elem_1) && (elem_1 < elem_2))
	{
		ra(a);
		sa(a);
	}
	else if ((elem_0 > elem_1) && (elem_2 > elem_0))
		ra(a);
	else if ((elem_1 > elem_0) && (elem_0 > elem_2))
	{
		rra(a);
		sa(a);
	}
	else if ((elem_0 > elem_2) && (elem_2 > elem_1))
		sa(a);
	else if ((elem_1 > elem_2) && (elem_2 > elem_0))
		rra(a);
}
