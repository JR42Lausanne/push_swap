/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_process.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:22:43 by jlaiti            #+#    #+#             */
/*   Updated: 2023/01/14 16:11:10 by jlaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] == '+' || str[i] == '-'))
		{
			ft_error(__func__);
			return (0);
		}
		i++;
	}
	return (1);
}

static int	check_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{	
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] == '-' || str[i + 1] == '+')
			{
				ft_error(__func__);
				return (0);
			}
			else if (str[i + 1] == '\0' || str[i] == '\0')
			{
				ft_error(__func__);
				return (0);
			}	
		}
		i++;
	}
	return (1);
}

int	ft_atoi_mod(char *str)
{
	int		i;
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res * sign > INTMAX || res * sign < INTMIN)
		ft_error(__func__);
	return (res * sign);
}

int	check_double(t_parse *parse)
{
	int	i;
	int	j;

	i = 0;
	while (i < parse->size)
	{
		j = i + 1;
		while (j < parse->size)
		{
			if (parse->array[i] == parse->array[j])
			{
				ft_error(__func__);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}	

int	check_input_process(char *str)
{
	if (!(check_is_alpha(str)))
		return (0);
	if (!(check_sign(str)))
		return (0);
	return (1);
}
