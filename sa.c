/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:15:42 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/24 11:42:14 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{	
	int		top_value;

	top_value = *(int *) ft_lstlast(a)->content;
	while (a && a->next && a->next->next)
		a = a->next;
	*(int *) a->next->content = *(int *) a->content;
	*(int *) a->content = top_value;
	ft_printf("sa\n");
}
