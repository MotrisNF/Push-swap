/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_movement_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:36:33 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 21:01:07 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_swap(t_list **lst)
{
	t_list  *first;
    	t_list  *second;

    	if (!lst || !*lst || !(*lst)->next)
        	return ;

    	first = *lst;
    	second = first->next;
    	first->next = second->next;
    	second->next = first;
    	*lst = second;
}

void	ft_push(t_list **dst, t_list **src)
{

	t_list  *tmp;

    	if (!src || !*src)
        	return ;
    	tmp = *src;
    	*src = (*src)->next;
    	ft_lstadd_front(dst, tmp);
}

void ft_rotate(t_list **lst)
{
    t_list *first;
    t_list *last;

    if (!lst || !*lst || !(*lst)->next)
        return ;
    first = *lst;
    *lst = first->next;
    last = *lst;
    while (last->next)
        last = last->next;
    last->next = first;
    first->next = NULL;
}

void ft_reverse_rotate(t_list **lst)
{
    t_list *prev;
    t_list *last;

    if (!lst || !*lst || !(*lst)->next)
        return ;
    prev = NULL;
    last = *lst;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *lst;
    *lst = last;
}
