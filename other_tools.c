/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:31:10 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 16:15:00 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_bigest_finder(t_type *header)
{
	int	bigest;

	bigest = header->num;
	while (header != NULL)
	{
		if (bigest <= header->num)
			bigest = header->num;
		header = header->next;
	}
	return (bigest);
}

int	ft_get_index(t_type **stack, int number)
{
	t_type	*head;
	int		i;

	i = 0;
	head = *stack;
	while (head)
	{
		if (head->num == number)
			return (i);
		head = head->next;
		i++;
	}
	return (i);
}

void	ft_sendtop(t_type **stack, int number, char ab)
{
	int	lst_size;
	int	index;

	lst_size = ft_lstsize(*stack) / 2;
	index = ft_get_index(stack, number);
	while (ft_peek(stack) != number)
		if (index > lst_size)
			ft_rrotate(stack, ab, 1);
	else
		ft_rotate(stack, ab, 1);
}

int	*ft_sortarray(int *table, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (table[i] > table[j])
			{
				tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (table);
}

int	*ft_sortarraydes(int *table, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (table[i] < table[j])
			{
				tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (table);
}
