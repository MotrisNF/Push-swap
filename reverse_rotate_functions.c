/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:18:25 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 21:28:33 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_reverse_rotate_a(t_list **a)
{
	ft_revers_rotate(a);
	ft_printf("rra");
}

void	ft_reverse_rotate_b(t_list **b)
{
	ft_revers_rotate(b);
	ft_printf("rrb");
}

void	ft_reverse_rotate_both(t_list **a, t_list **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_printf("rrr");
}

