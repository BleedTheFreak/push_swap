/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:06:38 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 09:35:32 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_type **stackA, t_type **stackB, char to, int print)
{
	t_type	*tmp;

	if (to == 'B' && *stackA)
	{
		tmp = (*stackB);
		*stackB = *stackA;
		*stackA = (*stackA)->next;
		(*stackB)->next = tmp;
		if (print)
			ft_putstr("pb\n");
	}
	else
	{
		if (*stackB)
		{
			tmp = (*stackA);
			*stackA = *stackB;
			*stackB = (*stackB)->next;
			(*stackA)->next = tmp;
			if (print)
				ft_putstr("pa\n");
		}
	}
}

void	ft_rotate(t_type **stack, char ab, int print)
{
	t_type	*tmp;
	t_type	*last;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		last = ft_lstlast(*stack);
		tmp->next = NULL;
		last->next = tmp;
		if (ab == 'A')
		{
			if (print)
				ft_putstr("ra\n");
		}
		else
		{
			if (print)
				ft_putstr("rb\n");
		}
	}
}

void	ft_rrotate(t_type **stack, char ab, int print)
{
	t_type	*tmp;
	t_type	*tmp2;
	t_type	*last;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		last = ft_lstlast(*stack);
		while (tmp != last)
		{
			tmp2 = tmp;
			tmp = tmp->next;
		}
		tmp2->next = NULL;
		last->next = *stack;
		*stack = last;
		if (ab == 'A')
		{
			if (print)
				ft_putstr("rra\n");
		}
		else
			if (print)
				ft_putstr("rrb\n");
	}
}

void	ft_swap(t_type **stack, char to, int print)
{
	int	tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->num;
	(*stack)->num = (*stack)->next->num;
	(*stack)->next->num = tmp;
	if (to == 'B')
	{
		if (print)
			ft_putstr("sb\n");
	}
	else
	{
		if (print)
			ft_putstr("sa\n");
	}
}

void	ft_rrr(t_type **stacka, t_type **stackb, int print)
{
	ft_rrotate(stacka, 'A', print);
	ft_rrotate(stackb, 'B', print);
}
