/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:43:03 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/23 13:02:43 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (*(int *) a->content < *(int *) a->next->content)
		{
			//ft_printf("not sorted\n");
			return (0);
		}
		a = a->next;
	}
	//ft_printf("sorted\n");
	return (1);
}
