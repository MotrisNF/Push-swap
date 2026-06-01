/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_actuator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 02:13:58 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/01 02:32:29 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_checker_actuator(t_list **a, t_list **b, char *input)
{
	if (ft_strncmp("sa\n", input, 4) == 0)
		ft_swap_a(a);
	else if (ft_strncmp("sb\n", input, 4) == 0)
		ft_swap_b(b);
	else if (ft_strncmp("ss\n", input, 4) == 0)
	{
		ft_swap_a(a);
		ft_swap_b(b);
	}
	else if (ft_strncmp("pa\n", input, 4) == 0)
		ft_push_a(a, b);
	else if (ft_strncmp("pb\n", input, 4) == 0)
		ft_push_b( a, b);
	else if (ft_strncmp("ra\n", input, 4) == 0)
		ft_rotate_a(a);
	else if (ft_strncmp("rb\n", input, 4) == 0)
		ft_rotate_b(b);
	else if (ft_strncmp("rr\n", input, 4) == 0)
	{
		ft_rotate_a(a);
		ft_rotate_b(b);
	}
	else if (ft_strncmp("rra\n", input, 5) == 0)
		ft_reverse_rotate_a(a);
	else if (ft_strncmp("rrb\n", input, 5) == 0)
		ft_reverse_rotate_b(b);
	else if (ft_strncmp("rrr\n", input, 5) == 0)
	{
		ft_reverse_rotate_a(a);
		ft_reverse_rotate_b(b);
	}
	else
	{
		ft_lstclear(a, free);
		ft_lstclear(b, free);
		free(input);
		ft_printf("Error");
		exit (1);
	}
}
