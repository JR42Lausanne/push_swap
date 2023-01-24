/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:25:47 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/24 11:11:19 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int	*temp;

	temp = malloc(sizeof(int));
	*temp = *(int *)ft_lstlast(a)->content;
	while (a->next)
	{
		*(int *)(a->content) = *(int *)(a->next->content);
		a = a->next;
	}
	ft_lstadd_front(&a, ft_lstnew((void *)temp));
	ft_printf("rra\n");
}
