/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_tools2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:44 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 16:14:54 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_helper(t_type **stack)
{
	int		*table;
	t_type	*head;
	int		i;

	table = malloc(sizeof(int) * ft_lstsize(*stack));
	i = 0;
	head = *stack;
	while (head)
	{
		table[i++] = head->num;
		head = head->next;
	}
	return (ft_sortarray(table, ft_lstsize(*stack)));
}

int	*ft_helperdes(t_type **stack)
{
	int		*table;
	t_type	*head;
	int		i;

	table = malloc(sizeof(int) * ft_lstsize(*stack));
	i = 0;
	head = *stack;
	while (head)
	{
		table[i++] = head->num;
		head = head->next;
	}
	return (ft_sortarraydes(table, ft_lstsize(*stack)));
}

int	ft_midpoint(int *table, int size)
{
	int	mid;
	int	nb;
	int	div;

	if (size > 50)
		div = 4;
	else
		div = 3;
	mid = size / div;
	if (mid > 0)
		nb = table[mid];
	else
		nb = table[size / 2];
	free(table);
	return (nb);
}

int	ft_midpoint500(int *table, int size)
{
	int	mid;
	int	nb;
	int	div;

	div = 4;
	if (size > 250)
		div = 5;
	else if (size < 150)
		div = 3;
	mid = size / div;
	if (mid > 0)
		nb = table[mid];
	else
		nb = table[size / 2];
	free(table);
	return (nb);
}

void	ft_midalgo(t_type **stackA, t_type **stackB)
{
	int	*table;
	int	mid;
	int	size;

	table = ft_helper(stackA);
	mid = ft_midpoint(table, ft_lstsize(*stackA));
	size = ft_lstsize(*stackA) / 2;
	while (ft_lstsize(*stackA) != size)
	{
		if (!ft_chucks_finder(*stackA, mid))
			return ;
		if (ft_peek(stackA) < mid)
			ft_push(stackA, stackB, 'B', 1);
		else if (ft_lstlast(*stackA)->num < mid)
		{
			ft_rrotate(stackA, 'A', 1);
			ft_push(stackA, stackB, 'B', 1);
		}
		else
			ft_rotate(stackA, 'A', 1);
	}
}
