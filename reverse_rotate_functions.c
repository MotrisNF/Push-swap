/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:18:25 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:23:02 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_reverse_rotate_a(t_list **a, t_moves **move_set)
{
	if (ft_reverse_rotate(a))
	{
		(*move_set)->rra += 1;
		printf("rra\n");
	}
}

void	ft_reverse_rotate_b(t_list **b, t_moves **move_set)
{
	if (ft_reverse_rotate(b))
	{
		(*move_set)->rrb += 1;
		printf("rrb\n");
	}
}

void	ft_reverse_rotate_both(t_list **a, t_list **b, t_moves **move_set)
{
	if (ft_reverse_rotate(a) && ft_reverse_rotate(b))
	{
		(*move_set)->rrr += 1;
		printf("rrr\n");
	}
}
