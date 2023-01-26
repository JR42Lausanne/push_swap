/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/26 13:02:32 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_pa(t_stack **a, t_stack **b, int *size_b)
{
	int	j;

	j = -1;
	while (++j < *size_b)
	{
		pa(a, b);
	}
}

void	big_sort(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	elem;
	int	size_b;

	i = -1;
	while (++i < 32)
	{
		if (is_sorted(a))
			return ;
		size_b = 0;
		j = -1;
		while (++j < size)
		{
			elem = *(int *) ft_lstlast(a)->content;
			if ((elem >> i) & 1)
				ra(a);
			else
			{
				pb(&a, &b);
				size_b++;
			}
		}
		push_pa(&a, &b, &size_b);
	}
}
