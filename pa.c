/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:04:30 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 17:42:30 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{	
	int		*temp_ptr;
	int		remove_first;
	t_stack	*copy;

	remove_first = 0;
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
	if (ft_lstsize(*b) == 1)
		remove_first = 1;
	ft_lstdelone(ft_lstlast(*b), free);
	if (remove_first == 1)
		*b = NULL;
	else
		copy->next = NULL;
}
