/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algoritme.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:53:44 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 22:11:24 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_simple_algoritme(size_t size, t_list **a, t_list **b)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (i == *(int)(*a)->content)
		{
			ft_push_b(a, b);
			i++;
		}
		else
			ft_rotate_a(a);
	}
	i = 0;
	while (*b)
		ft_push_a(a, b);
}
