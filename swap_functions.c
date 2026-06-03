/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:05:47 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 11:11:52 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_swap_a(t_list **a, t_moves **move_set)
{
	if (ft_swap(a))
	{
		(*move_set)->rrb += 1;
		printf("sa");
	}
}

void	ft_swap_b(t_list **b, t_moves **move_set)
{
	if (ft_swap(b))
	{
		(*move_set)->rrb += 1;
		printf("sb");
	}
}

void	ft_swap_both(t_list **a, t_list **b, t_moves **move_set)
{
	if (ft_swap(a) && ft_swap(b))
	{
		(*move_set)->rrb += 1;
		printf("ss");
	}
}
