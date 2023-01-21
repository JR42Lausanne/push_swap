/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:20 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/21 09:43:12 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = parse_input(argc, argv);
	//print_stack_big(a, "t_stack a");
	//print_stack_big(b, "t_stack b");
	check_sort(a, b);
	//print_stack_big(a, "t_stack a");
	//print_stack_big(b, "t_stack b");
	//pb(&a, &b);
	//pb(&a, &b);
	//pa(&a, &b);
	//print_stack_big(a, "t_stack a");
	//print_stack_big(b, "t_stack b");
	return (0);
}
