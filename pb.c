/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:01:04 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/19 13:35:02 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	int		*temp_ptr;
	t_stack	*copy;

	if (!a || !*a)
		return ;
	temp_ptr = malloc(sizeof(int));
	if (!temp_ptr)
		return ;
	*temp_ptr = *(int *)ft_lstlast(*a)->content;
	ft_lstadd_back(b, ft_lstnew((void *)temp_ptr));
	copy = *a;
	while (copy->next && copy->next->next)
		copy = copy->next;
	ft_lstdelone(ft_lstlast(*a), free);
	copy->next = NULL;
	ft_printf("pb\n");
}
