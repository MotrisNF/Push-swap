/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:07:18 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:36:16 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>

//List define and list functions
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_moves
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_moves;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
//First stack creation
t_list	*ft_create_stack(int *index, int size);
//Global movement functions
int		ft_swap(t_list **lst);
int		ft_push(t_list **dst, t_list **src);
int		ft_rotate(t_list **lst);
int		ft_reverse_rotate(t_list **lst);
//Swap functions
void	ft_swap_a(t_list **a, t_moves **move_set);
void	ft_swap_b(t_list **b, t_moves **move_set);
void	ft_swap_both(t_list **a, t_list **b, t_moves **move_set);
//Push functions
void	ft_push_a(t_list **a, t_list **b, t_moves **move_set);
void	ft_push_b(t_list **a, t_list **b, t_moves **move_set);
//Rotate functions
void	ft_rotate_a(t_list **a, t_moves **move_set);
void	ft_rotate_b(t_list **b, t_moves **move_set);
void	ft_rotate_both(t_list **a, t_list **b, t_moves **move_set);
//Reverse rotate functions
void	ft_reverse_rotate_a(t_list **a, t_moves **move_set);
void	ft_reverse_rotate_b(t_list **b, t_moves **move_set);
void	ft_reverse_rotate_both(t_list **a, t_list **b, t_moves **move_set);
//Algoritmes
void	ft_return_to_a(t_list **a, t_list **b, t_moves **move_set);
void	ft_send_to_b(t_list **a, t_list **b, int window, t_moves **move_set);
int		ft_get_position(t_list **list, size_t value);
//Selection sort
void	ft_simple_algoritme(size_t size, t_list **a,
			t_list **b, t_moves **move_set);
void	ft_medium_algoritme(t_list **a, t_list **b,
			size_t size, t_moves **move_set);
void	ft_hard_algoritme(t_list **a, t_list **b,
			size_t size, t_moves **move_set);
//Check order
int		ft_check_order(t_list **stack);

#endif
