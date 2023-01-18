/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:01:04 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 18:41:41 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack *b)
{
	t_stack	*a_top;

	if (!a)
		return ;
	if (!*a)
		return ;
	a_top = ft_lstlast(*a);
	ft_lstadd_back(&b, ft_lstnew(a_top->content));
	ft_printf("pb\n");
	if (!(*a)->next)
	{
		*a = NULL;
		return ;
	}
	while ((*a)->next->next)
		*a = (*a)->next;
	(*a)->next = NULL;
}
