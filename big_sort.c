/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 17:45:57 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	elem;
	int	size_b;

	i = -1;
	while (++i < 32)
	{
		//printf("\nbit i = %d\n", i);
		//print_stack_big(a, "__a__");
		//print_stack_big(b, "__b__");
		if (is_sorted(a))
			return ;
		size_b = 0;
		j = -1;
		while (++j < size)
		{
			//printf("___________\n");
			//printf("checking elem %d\n", j);
			elem = *(int *) ft_lstlast(a)->content;
			if ((elem >> i) & 1)
				ra(a);
			else
			{
				pb(&a, &b);
				size_b++;
				//printf("pushed elem %d\n", size_b);
			}
		}
		j = -1;
		while (++j < size_b)
		{
			//printf("pushing elem %d\n", j);
			pa(&a, &b);
		}
	}
	//printf("exited big_sort\n");
}
