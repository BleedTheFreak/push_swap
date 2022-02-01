/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:09:10 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 17:20:25 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char const *string)
{
	int	i;

	i = 0;
	if ((string[i] == '-' && strlen(string) == 1)
		|| (string[i] == '+' && strlen(string) == 1))
		ft_error("\033[0;31mError\n");
	while (string[i])
	{
		if ((string[i] >= '0' && string[i] <= '9')
			|| string[i] == '-' || string[i] == '+')
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_error(char *message)
{
	ft_putstr(message);
	exit(1);
}

int	ft_dupl(int element, t_type *stack)
{
	t_type	*head;

	head = stack;
	while (head)
	{
		if (element == head->num)
			return (1);
		else
			head = head->next;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_rr(t_type **stacka, t_type **stackb, int print)
{
	ft_rotate(stacka, 'A', print);
	ft_rotate(stackb, 'B', print);
}
