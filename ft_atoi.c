/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:26:09 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 17:28:16 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long			number;
	int							sign;
	int							i;
	int							n;

	i = 0;
	sign = 1;
	number = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -1;
	n = i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		number = number * 10 + (nptr[i++] - 48);
	if (number > 2147483647 && sign == 1)
		ft_error("\033[0;31mError\n");
	else if (number > 2147483648 && sign == -1)
		ft_error("\033[0;31mError\n");
	else
		return (((int)number) * sign);
	return (0);
}
