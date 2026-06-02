/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:07:18 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/02 19:07:01 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
#include <stdio.h>


//List define and list functions
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
//First stack creation
t_list  *ft_create_stack(int *index, int size);
//Global movement functions
void    ft_swap(t_list **lst);
void    ft_push(t_list **dst, t_list **src);
void 	ft_rotate(t_list **lst);
void 	ft_reverse_rotate(t_list **lst);
//Swap functions
void    ft_swap_a(t_list **a);
void    ft_swap_b(t_list **b);
void    ft_swap_both(t_list **a, t_list **b);
//Push functions
void    ft_push_a(t_list **a, t_list **b);
void    ft_push_b(t_list **a, t_list **b);
//Rotate functions
void    ft_rotate_a(t_list **a);
void    ft_rotate_b(t_list **b);
void    ft_rotate_both(t_list **a, t_list **b);
//Reverse rotate functions
void    ft_reverse_rotate_a(t_list **a);
void    ft_reverse_rotate_b(t_list **b);
void    ft_reverse_rotate_both(t_list **a, t_list **b);
//Algoritmes

//Selection sort
size_t    ft_simple_algoritme(size_t size, t_list **a, t_list **b);
int     ft_medium_algoritme(t_list **a, t_list **b, size_t size);

//Check order
int     ft_check_order(t_list **stack, size_t size);

#endif
