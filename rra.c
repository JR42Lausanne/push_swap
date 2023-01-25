/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:25:47 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/25 14:41:22 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int		temp;
	int		temp_pres;

	temp_pres = *(int *) ft_lstlast(a)->content;
	while (a)
	{	
		temp = *(int *)(a->content);
		*(int *)(a->content) = temp_pres;
		temp_pres = temp;
		a = a->next;
	}
	ft_printf("ra\n");
}
