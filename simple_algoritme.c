/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algoritme.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:53:44 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:35:04 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_simple_algoritme(size_t size, t_list **a,
			t_list **b, t_moves **move_set)
{
	int	i;

	i = 1;
	while (i < (int)size)
	{
		if (i == *(int *)(*a)->content)
		{
			ft_push_b(a, b, move_set);
			i++;
		}
		else
			ft_rotate_a(a, move_set);
	}
	while (*b)
		ft_push_a(a, b, move_set);
}
