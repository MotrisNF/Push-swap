/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hard_algoritme.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 21:40:33 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/02 21:45:14 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_send_to_b(t_list **a, t_list **b, int window, int *counter)
{
	int	i;

	i = 1;
	while (*a)
	{
		if (*(int *)(*a)->content <= i)
		{
			ft_push_b(a, b);
			(*counter)++;
			i++;
		}
		else if (*(int *)(*a)->content <= (i + window))
		{
			ft_push_b(a, b);
			ft_rotate_b(b);
			(*counter)++;
			i++;
		}
		else
		{
			ft_rotate_a(a);
			(*counter)++;
		}
	}
}

void	ft_return_to_a(t_list **a, t_list **b, int *counter)
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
			{
				ft_rotate_b(b);
				(*counter)++;
			}
		}
		else
		{
			while (*(int *)(*b)->content != target)
			{
				ft_reverse_rotate_b(b);
				(*counter)++;
			}
		}
		ft_push_a(a, b);
		(*counter)++;
	}
}

int	ft_hard_algoritme(t_list **a, t_list **b, size_t size)
{
	int	counter;
	int	window;

	counter = 0;
	if (size <= 100)
		window = 15;
	else
		window = 32;
	ft_send_to_b(a, b, window, &counter);
	ft_return_to_a(a, b, &counter);
	return (counter);
}
