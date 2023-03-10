/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:59:06 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/24 11:29:05 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_big(t_stack *stack, char *stack_name)
{
	printf("------- %s ------\n", stack_name);
	printf("| BOTTOM |\n");
	while (stack)
	{
		printf("%d\n", *(int *) stack->content);
		stack = stack->next;
	}
	printf("| TOP |\n");
}
