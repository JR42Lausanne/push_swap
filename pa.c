/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:04:30 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 17:58:32 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{	
	t_stack	*b_top;

	if (!b)
		return ;
	b_top = ft_lstlast(b);
	ft_lstadd_back(&a, ft_lstnew(b_top->content));
	ft_lstdelone(b->content, free);
	ft_printf("pa\n");
}
