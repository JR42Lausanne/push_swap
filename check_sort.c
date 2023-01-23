/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:13:12 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/23 14:06:36 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = ft_lstsize(a);
	printf("size->%d\n", size);
	if (size <= 5)
	{
		if (size == 1)
			is_sorted(a);
		else if (size == 2)
		{
			is_sorted(a);
			ra(a);
		}
		else if (size == 3)
		{
			little_sort_3(a, b);
		}
		else
			little_sort_4_5(a, b);
	}
	big_sort(a, b, size);
}
