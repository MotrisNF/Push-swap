/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_fuctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:13:46 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:26:23 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rotate_a(t_list **a, t_moves **move_set)
{
	if (ft_rotate(a))
	{
		(*move_set)->ra += 1;
		printf("ra\n");
	}
}

void	ft_rotate_b(t_list **b, t_moves **move_set)
{
	if (ft_rotate(b))
	{
		(*move_set)->rb += 1;
		printf("rb\n");
	}
}

void	ft_rotate_both(t_list **a, t_list **b, t_moves **move_set)
{
	if (ft_rotate(a) && ft_rotate(b))
	{
		(*move_set)->rr += 1;
		printf("rr\n");
	}
}
