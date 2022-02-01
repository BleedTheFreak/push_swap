/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_tools3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:42 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 12:05:27 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_midalgo500(t_type **stackA, t_type **stackB)
{
	int	*table;
	int	mid;
	int	size;

	table = ft_helper(stackA);
	mid = ft_midpoint500(table, ft_lstsize(*stackA));
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

void	ft_rmidalgo(t_type **stackA, t_type **stackB)
{
	int	*table;
	int	mid;
	int	size;

	table = ft_helperdes(stackB);
	mid = ft_midpoint(table, ft_lstsize(*stackB));
	size = ft_lstsize(*stackB) / 2;
	while (ft_lstsize(*stackB) != size)
	{
		if (!ft_rchucks_finder(*stackB, mid))
			return ;
		if (ft_peek(stackB) > mid)
			ft_push(stackA, stackB, 'A', 1);
		else if (ft_lstlast(*stackB)->num > mid)
		{
			ft_rrotate(stackB, 'B', 1);
			ft_push(stackA, stackB, 'A', 1);
		}
		else
			ft_rotate(stackB, 'B', 1);
		if (ft_lstsize(*stackB) == 1)
			ft_push(stackA, stackB, 'A', 1);
	}
}
