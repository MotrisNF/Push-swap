/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:09:55 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 11:22:05 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_push_a(t_list **a, t_list **b, t_moves **move_set)
{
	if (ft_push(a, b))
	{
		(*move_set)->pa += 1;
		printf("pa\n");
	}
}

void	ft_push_b(t_list **a, t_list **b, t_moves **move_set)
{
	if (ft_push(b, a))
	{
		(*move_set)->pb += 1;
		printf("pb\n");
	}
}
