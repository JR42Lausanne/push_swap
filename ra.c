/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:26:17 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/19 13:06:18 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int		temp;

	temp = *(int *) a->content;
	while (a->next)
	{
		*(int *)(a->content) = *(int *)(a->next->content);
		a = a->next;
	}
	*(int *)a->content = temp;
	ft_printf("ra\n");
}
