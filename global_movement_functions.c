/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_movement_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:36:33 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:17:55 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_swap(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	first = *lst;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*lst = second;
	return (1);
}

int	ft_push(t_list **dst, t_list **src)
{
	t_list	*tmp;

	if (!src || !*src)
		return (0);
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, tmp);
	return (1);
}

int	ft_rotate(t_list **lst)
{
	t_list	*first;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	first = *lst;
	*lst = first->next;
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	return (1);
}

int	ft_reverse_rotate(t_list **lst)
{
	t_list	*prev;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
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
	return (1);
}
