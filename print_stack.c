/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:59:06 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 18:25:17 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_big(t_stack *stack, char *stack_name)
{
	printf("------- %s ------\n", stack_name);
	while (stack)
	{
		printf("%d\n", *(int *) stack->content);
		stack = stack->next;
	}
}
