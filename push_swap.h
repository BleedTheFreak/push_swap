/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:31:27 by ytaya             #+#    #+#             */
/*   Updated: 2022/02/01 17:19:51 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/get_next_line.h"
# include <limits.h>

typedef struct s_type
{
	int				num;
	struct s_type	*next;
}t_type;

int		ft_strcmp(const char *X, const char *Y);
t_type	*ft_lstnew(int number);
t_type	*ft_lstlast(t_type *lst);
void	ft_lstadd_back(t_type **lst, t_type *new);
int		ft_isdigit(char const *string);
void	ft_error(char *message);
int		ft_dupl(int element, t_type *stack);
void	ft_fill_stack(char **argv, t_type **stack);
void	ft_push(t_type **stackA, t_type **stackB, char to, int print);
void	ft_rotate(t_type **stack, char ab, int print);
void	ft_rrotate(t_type **stack, char ab, int print);
void	ft_swap(t_type **stack, char to, int print);
int		ft_lstsize(t_type *lst);
void	ft_print(t_type *head, char ab);
int		ft_issorted(t_type *head);
int		ft_issorteddes(t_type *head);
void	ft_sort3(t_type **stack);
int		ft_peek(t_type **stack);
long	ft_smallest_finder(t_type *header);
t_type	*ft_chucks_finder(t_type *header, int number);
t_type	*ft_rchucks_finder(t_type *header, int number);
long	ft_bigest_finder(t_type *header);
int		ft_get_index(t_type **stack, int number);
void	ft_sendtop(t_type **stack, int number, char ab);
int		*ft_sortarray(int *table, int size);
int		*ft_sortarraydes(int *table, int size);
int		*ft_helper(t_type **stack);
int		*ft_helperdes(t_type **stack);
int		ft_midpoint(int *table, int size);
int		ft_midpoint500(int *table, int size);
void	ft_small_sort(t_type **stackA, t_type **stackB);
void	ft_midalgo(t_type **stackA, t_type **stackB);	
void	ft_midalgo500(t_type **stackA, t_type **stackB);
void	ft_rmidalgo(t_type **stackA, t_type **stackB);
void	ft_sortbybigest(t_type **stackA, t_type **stackB);
void	ft_finalsort(t_type **stackA, t_type **stackB);
void	ft_small_sort2(t_type **stackA, t_type **stackB);
void	ft_bigsort(t_type **stackA, t_type **stackB);
void	helper(t_type **stack, char ab);
void	ft_push_swap(char **argv, t_type **stackA, t_type **stackB);
void	ft_putstr(char *str);
void	ft_rrr(t_type **stacka, t_type **stackb, int print);
void	ft_rr(t_type **stacka, t_type **stackb, int print);
int		ft_atoi(const char *nptr);

#endif 
