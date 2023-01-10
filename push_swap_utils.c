
#include "push_swap.h"

int	ft_atoi_mod(char *str)
{
	int	i;
	int	res;
	int	sign;

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
	if (!(str[i] >= '0' && str[i] <= '9'))
		ft_exit_process();
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_exit_process();
		i++;
	}
	return (res * sign);
}

void	ft_exit_process(void)
{
	exit(EXIT_FAILURE);
}
