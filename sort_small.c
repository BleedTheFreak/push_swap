/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:48 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 08:44:35 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_type **stack)
{
	t_type	*head;
	t_type	*mid;

	head = *stack;
	mid = head->next;
	if (ft_issorted(head))
		return ;
	if (head->num > mid->num)
		ft_swap(stack, 'A', 1);
	else
		ft_rrotate(stack, 'A', 1);
	ft_sort3(stack);
}

long	ft_smallest_finder(t_type *header)
{
	int	smallest;

	smallest = header->num;
	while (header != NULL)
	{
		if (smallest >= header->num)
			smallest = header->num;
		header = header->next;
	}
	return (smallest);
}

void	ft_small_sort(t_type **stackA, t_type **stackB)
{
	if (ft_issorted(*stackA))
		return ;
	while (ft_lstsize(*stackA) != 0 && !ft_issorted(*stackA))
	{
		if (ft_lstsize(*stackA) <= 3)
			ft_sort3(stackA);
		else
			ft_sendtop(stackA, ft_smallest_finder(*stackA), 'A');
		if (!ft_issorted(*stackA))
			ft_push(stackA, stackB, 'B', 1);
	}
	while (ft_lstsize(*stackB) != 0)
		ft_push(stackA, stackB, 'A', 1);
}
