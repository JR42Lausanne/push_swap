/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:13:12 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 13:42:14 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = ft_lstsize(a);
	if (size <= 5)
	{
		if (size == 1)
			return ;
		else if (size == 2)
		{
			if (!(is_sorted(a)))
				ra(a);
		}
		else if (size == 3)
			little_sort_3(a);
		else if (size == 4)
			little_sort_4(a, b);
		else if (size == 5)
			little_sort_5(a, b);
	}
	else
		big_sort(a, b, size);
}
