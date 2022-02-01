/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 08:50:15 by ytaya             #+#    #+#             */
/*   Updated: 2022/01/31 08:55:27 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *X, const char *Y)
{
	while (*X)
	{
		if (*X != *Y)
			break ;
		X++;
		Y++;
	}
	return (*(const unsigned char *)X - *(const unsigned char *)Y);
}
