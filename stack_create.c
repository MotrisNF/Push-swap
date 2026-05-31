/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:06:14 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 22:49:38 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_create_stack(int *index, int size)
{
	t_list	*lst;
	t_list	*node;
	size_t	i;

	i = 0;
	lst = NULL;
	while (i < size)
	{
		node = ft_lstnew(&index[i]);
		if (!node)
		{
			ft_lstclear(&lst, free);
			return (NULL);
		}
		ft_lstadd_back(&lst, node);
		i++;
	}
	return (lst);
}
