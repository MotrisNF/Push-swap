/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:05:47 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 21:09:23 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_a(t_list **a)
{
	ft_swap(a);
	ft_printf("sa");
}

void	ft_swap_b(t_list **b)
{
	ft_swap(b);
	ft_printf("sb");
}

void	ft_swap_both(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss");
}
