/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:32:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/23 17:41:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	checker_atoi(int sign, int result)
{
	if (sign == 1 && result > INT_MAX)
	{
		write(1, "error\n", 6);
		exit(1);
	}
	else if (sign == -1 && (sign * result) < INT_MIN)
	{
		write(1, "error\n", 6);
		exit(1);
	}
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		checker_atoi(sign, result);
		i++;
	}
	return ((int)(result * sign));
}