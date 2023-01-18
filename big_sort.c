/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:31 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 14:40:42 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	elem;

	i = -1;
	while (++i < sizeof(int) * 8)
	{
		j = -1;
		while (++j < size)
		{
			elem = (int) ft_lstlast(a)->content;
			if ((elem >> i) & 1)
				ra(a);
			else
			{	
				//ft_lstadd_front(&a, ft_lstnew(&b->content));
				//printf("pb\n");
			}
		}
		j = -1;
		while (++j < size)
		{
			//ft_lstadd_front(&b, ft_lstnew(&a->content));
			//ft_printf("pa\n");
		}	
	}
}
