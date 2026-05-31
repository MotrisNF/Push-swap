/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:18:25 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 23:08:31 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_reverse_rotate_a(t_list **a)
{
	ft_reverse_rotate(a);
	printf("rra\n");
}

void	ft_reverse_rotate_b(t_list **b)
{
	ft_reverse_rotate(b);
	printf("rrb\n");
}

void	ft_reverse_rotate_both(t_list **a, t_list **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	printf("rrr\n");
}

