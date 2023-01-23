/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:04:30 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/23 11:19:33 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{	
	int		*temp_ptr;
	t_stack	*copy;

	ft_printf("pa\n");
	if (!b || !*b)
		return ;
	temp_ptr = malloc(sizeof(int));
	if (!temp_ptr)
		return ;
	*temp_ptr = *(int *)ft_lstlast(*b)->content;
	ft_lstadd_back(a, ft_lstnew((void *)temp_ptr));
	copy = *b;
	while (copy->next && copy->next->next)
		copy = copy->next;
	ft_lstdelone(ft_lstlast(*b), free);
	copy->next = NULL;
}
