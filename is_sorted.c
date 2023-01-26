/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:43:03 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/26 10:07:11 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (*(int *) a->content < *(int *) a->next->content)
		{
			return (0);
		}
		a = a->next;
	}
	return (1);
}
