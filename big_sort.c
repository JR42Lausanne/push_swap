/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/21 09:57:53 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	elem;

	i = -1;
	//print_stack_big(a, "t_stack a");
	//print_stack_big(b, "t_stack b");
	while (++i < 32)
	{
		j = -1;
		while (++j < size)
		{
			elem = *(int *) ft_lstlast(a)->content;
			if ((elem >> i) & 1)
				ra(a);
			else
				pb(&a, &b);
		}
		j = -1;
		//print_stack_big(a, "t_stack a");
		//print_stack_big(b, "t_stack b");
		while (++j < size)
		{
			pa(&a, &b);
		}
		//print_stack_big(a, "t_stack a");
		//print_stack_big(b, "t_stack b");
	}
}
