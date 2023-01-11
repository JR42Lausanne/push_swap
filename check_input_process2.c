
#include "push_swap.h"

static int	check_is_alpha(char *str)
{
	int	i;

	i = 0;
	//printf("%s\n", str);
	while (str[i] != 0)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
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
				return (0);
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
	if (res > INTMAX || res < INTMIN)
		ft_error();
	return (res * sign);
}

int	check_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}	

int	check_input_process2(char *str)
{
	if (!(check_is_alpha(str)))
		return (0);
	if (!(check_sign(str)))
		return (0);
	return (1);
}
