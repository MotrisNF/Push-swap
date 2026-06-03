/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:06:14 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:36:43 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_create_stack(int *index, int size)
{
	t_list	*lst;
	t_list	*node;
	int	i;

	i = 0;
	lst = NULL;
	while (i < size)
	{
		node = ft_lstnew(&index[i]);
		if (!node)
		{
			ft_lstclear(&lst);
			return (NULL);
		}
		ft_lstadd_back(&lst, node);
		i++;
	}
	return (lst);
}
