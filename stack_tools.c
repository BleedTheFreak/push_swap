/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:31:20 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 15:14:07 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_type	*ft_lstnew(int number)
{
	t_type	*newlst;

	newlst = (t_type *) malloc(sizeof(t_type));
	if (!newlst)
		return (0);
	newlst->next = NULL;
	newlst->num = number;
	return (newlst);
}

t_type	*ft_lstlast(t_type *lst)
{
	t_type	*ptrlst;

	if (lst == NULL)
		return (lst);
	ptrlst = lst;
	while (ptrlst->next)
		ptrlst = ptrlst->next;
	return (ptrlst);
}

void	ft_lstadd_back(t_type **lst, t_type *new)
{
	t_type	*ptrlst;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ptrlst = ft_lstlast(*lst);
	ptrlst->next = new;
}

void	ft_fill_stack(char **argv, t_type **stack)
{
	int		i;
	t_type	*head;

	i = 0;
	if (argv[i] && ft_isdigit(argv[i]))
		head = ft_lstnew(ft_atoi(argv[i++]));
	else
		ft_error("\033[0;31mError\n");
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) && !ft_dupl(ft_atoi(argv[i]), head))
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(argv[i++])));
		else
			ft_error("\033[0;31mError\n");
	}
	*stack = head;
}

int	ft_lstsize(t_type *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
