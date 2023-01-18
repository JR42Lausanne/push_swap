/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:01:04 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 21:47:21 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	del_last(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	if ((*stack)->next == NULL)
		;
	ft_lstdelone(temp, free);
}

void	pb(t_stack *a, t_stack *b)
{
	t_stack	*a_top;
	int		*temp;

	if (!a)
		return ;
	temp = malloc(sizeof(int *));
	a_top = ft_lstlast(a);
	*temp = *(int *) a_top->content;
	ft_lstadd_back(&b, ft_lstnew(temp));
	ft_printf("pb\n");
	ft_lstdelone(a_top, free);
	/*
	if (!(*a)->next)
	{
		*a = NULL;
		return ;
	}
	while ((*a)->next->next)
		*a = (*a)->next;
	(*a)->next = NULL;
	*/
}
