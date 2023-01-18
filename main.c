/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:20 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/18 12:57:57 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*a_copy;
	t_stack	*b;

	b = NULL;
	a = parse_input(argc, argv);
	a_copy = a;
	while (a)
	{
		printf("%d\n", *(int *) a->content);
		a = a->next;
	}
	check_sort(a_copy, b);
	printf("flag2\n");
	return (0);
}
