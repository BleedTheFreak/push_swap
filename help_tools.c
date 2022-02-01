/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:55:27 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 12:11:17 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issorted(t_type *head)
{
	if (head == NULL || head->next == NULL)
		return (1);
	return (head->num < head->next->num && ft_issorted(head->next));
}

int	ft_issorteddes(t_type *head)
{
	if (head == NULL || head->next == NULL)
		return (1);
	return (head->num > head->next->num && ft_issorted(head->next));
}

int	ft_peek(t_type **stack)
{
	return ((*stack)->num);
}

t_type	*ft_chucks_finder(t_type *header, int number)
{
	while (header)
	{
		if (header->num < number)
			return (header);
		header = header->next;
	}
	return (NULL);
}

t_type	*ft_rchucks_finder(t_type *header, int number)
{
	while (header)
	{
		if (header->num > number)
			return (header);
		header = header->next;
	}
	return (NULL);
}
