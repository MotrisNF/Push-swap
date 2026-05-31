/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_fuctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:13:46 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 21:18:09 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rotate_a(t_list **a)
{
	ft_rotate(a);
	ft_printf("ra");
}

void	ft_rotate_b(t_list **b)
{
	ft_rotate(b);
	ft_printf("rb");
}

void	ft_rotate_both(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr");
}
