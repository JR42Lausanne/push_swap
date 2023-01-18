/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:13:12 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 17:19:15 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = ft_lstsize(a);
	/*printf("size->%d\n", size);
	if (size <= 5)
	{
		if (size == 1)
			little_sort(a));
		else if (size == 2)
		{
			llll
		}
		else if (size == 3)
		{
			llll
		}
		else
			llll

	}*/
	big_sort(a, b, size);
}
