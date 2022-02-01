/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:46 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 08:44:15 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortbybigest(t_type **stackA, t_type **stackB)
{
	int	bigest;

	while (ft_lstsize(*stackB) != 0)
	{
		bigest = ft_bigest_finder(*stackB);
		ft_sendtop(stackB, bigest, 'B');
		ft_push(stackA, stackB, 'A', 1);
	}
}

void	ft_finalsort(t_type **stackA, t_type **stackB)
{
	if (ft_lstsize(*stackA) <= 5)
	{
		ft_small_sort(stackA, stackB);
		return ;
	}
	while (ft_lstsize(*stackA) != 2 && !ft_issorted(*stackA))
		ft_midalgo(stackA, stackB);
	if (ft_lstsize(*stackA) <= 2)
		ft_sort3(stackA);
	if (ft_issorteddes(*stackB))
		while (ft_lstsize(*stackB) != 0)
			ft_push(stackA, stackB, 'A', 1);
	else
		ft_sortbybigest(stackA, stackB);
}

void	ft_small_sort2(t_type **stackA, t_type **stackB)
{
	int	i;

	i = 0;
	if (ft_issorted(*stackA))
		return ;
	while (ft_lstsize(*stackA) != 0 && !ft_issorted(*stackA))
	{
		if (ft_lstsize(*stackA) <= 3)
			ft_sort3(stackA);
		else
			ft_sendtop(stackA, ft_smallest_finder(*stackA), 'A');
		if (!ft_issorted(*stackA))
		{
			ft_push(stackA, stackB, 'B', 1);
			i++;
		}
	}
	while (i--)
		ft_push(stackA, stackB, 'A', 1);
}

void	ft_bigsort(t_type **stackA, t_type **stackB)
{
	while (ft_lstsize(*stackA) != 1 && !ft_issorted(*stackA))
	{
		ft_midalgo500(stackA, stackB);
		if (ft_lstsize(*stackA) <= 3)
			ft_sort3(stackA);
	}
	while (ft_lstsize(*stackB) != 0)
	{
		ft_rmidalgo(stackA, stackB);
		ft_small_sort2(stackA, stackB);
	}
}
