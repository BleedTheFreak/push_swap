/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:44:15 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 17:31:26 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkop(char *op, t_type **stacka, t_type **stackb)
{
	if (ft_strcmp(op, "pa\n") == 0)
		ft_push(stacka, stackb, 'A', 0);
	else if (ft_strcmp(op, "pb\n") == 0)
		ft_push(stacka, stackb, 'B', 0);
	else if (ft_strcmp(op, "sa\n") == 0)
		ft_swap(stacka, 'A', 0);
	else if (ft_strcmp(op, "sb\n") == 0)
		ft_swap(stackb, 'B', 0);
	else if (ft_strcmp(op, "ra\n") == 0)
		ft_rotate(stacka, 'A', 0);
	else if (ft_strcmp(op, "rb\n") == 0)
		ft_rotate(stackb, 'B', 0);
	else if (ft_strcmp(op, "rra\n") == 0)
		ft_rrotate(stacka, 'A', 0);
	else if (ft_strcmp(op, "rrb\n") == 0)
		ft_rrotate(stackb, 'B', 0);
	else if (ft_strcmp(op, "rrr\n") == 0)
		ft_rrr(stacka, stackb, 0);
	else if (ft_strcmp(op, "rr\n") == 0)
		ft_rr(stackb, stackb, 0);
	else
		ft_error("\033[0;31mError\n");
}

int	main(int argc, char *argv[])
{
	t_type	*stacka;
	t_type	*stackb;
	char	*str;

	if (argc > 1)
	{
		stackb = NULL;
		ft_fill_stack(&argv[1], &stacka);
		while (1)
		{
			str = get_next_line(0);
			if (!str)
				break ;
			ft_checkop(str, &stacka, &stackb);
			free(str);
		}
		if (ft_issorted(stacka) && ft_lstsize(stackb) == 0)
			ft_putstr("\033[0;32mOK\n");
		else
			ft_error("\033[0;31mKO\n");
	}
	else
		exit(1);
	return (0);
}
