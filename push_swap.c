/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:30:14 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 17:31:47 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **argv, t_type **stackA, t_type **stackB)
{
	ft_fill_stack(argv, stackA);
	if (!ft_issorted(*stackA))
	{
		if (ft_lstsize(*stackA) <= 5)
		{
			ft_small_sort(stackA, stackB);
			return ;
		}
		else if (ft_lstsize(*stackA) <= 100)
			ft_finalsort(stackA, stackB);
		else
			ft_bigsort(stackA, stackB);
	}
}

int	main(int argc, char **argv)
{
	t_type	*stacka;
	t_type	*stackb;

	stackb = NULL;
	if (argc > 1)
		ft_push_swap(&argv[1], &stacka, &stackb);
	else
	{
		ft_putstr("\033[0;33mnote : You need to enter at least 2 \
digits\nusage : ./push_swap 1 ... 2\n");
		exit(1);
	}
	return (0);
}
