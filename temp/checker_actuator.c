/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_actuator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 02:13:58 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:24:30 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_checker_actuator(t_list **a, t_list **b, char *input)
{
	if (ft_strncmp("sa\n", input, 4) == 0)
		ft_swap(a);
	else if (ft_strncmp("sb\n", input, 4) == 0)
		ft_swap(b);
	else if (ft_strncmp("ss\n", input, 4) == 0)
	{
		ft_swap(a);
		ft_swap(b);
	}
	else if (ft_strncmp("pa\n", input, 4) == 0)
		ft_push(a, b);
	else if (ft_strncmp("pb\n", input, 4) == 0)
		ft_push(b, a);
	else if (ft_strncmp("ra\n", input, 4) == 0)
		ft_rotate(a);
	else if (ft_strncmp("rb\n", input, 4) == 0)
		ft_rotate(b);
	else if (ft_strncmp("rr\n", input, 4) == 0)
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	else if (ft_strncmp("rra\n", input, 5) == 0)
		ft_reverse_rotate(a);
	else if (ft_strncmp("rrb\n", input, 5) == 0)
		ft_reverse_rotate(b);
	else if (ft_strncmp("rrr\n", input, 5) == 0)
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
	}
	else
	{
		ft_lstclear(a, free);
		ft_lstclear(b, free);
		free(input);
		printf("Error");
		exit (1);
	}
}
