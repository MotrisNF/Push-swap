/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hard_algoritme.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 21:40:33 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:32:06 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_send_to_b(t_list **a, t_list **b, int window, t_moves **move_set)
{
	int	i;

	i = 1;
	while (*a)
	{
		if (*(int *)(*a)->content <= i)
		{
			ft_push_b(a, b, move_set);
			i++;
		}
		else if (*(int *)(*a)->content <= (i + window))
		{
			ft_push_b(a, b, move_set);
			ft_rotate_b(b, move_set);
			i++;
		}
		else
			ft_rotate_a(a, move_set);
	}
}

void	ft_return_to_a(t_list **a, t_list **b, t_moves **move_set)
{
	int	pos;
	int	b_size;
	int	target;

	while (*b)
	{
		b_size = ft_lstsize(*b);
		target = b_size;
		pos = ft_get_position(b, target);
		if (pos <= b_size / 2)
		{
			while (*(int *)(*b)->content != target)
				ft_rotate_b(b, move_set);
		}
		else
		{
			while (*(int *)(*b)->content != target)
				ft_reverse_rotate_b(b, move_set);
		}
		ft_push_a(a, b, move_set);
	}
}

void	ft_hard_algoritme(t_list **a, t_list **b,
			size_t size, t_moves **move_set)
{
	int	window;

	if (size <= 100)
		window = 15;
	else
		window = 32;
	ft_send_to_b(a, b, window, move_set);
	ft_return_to_a(a, b, move_set);
}
