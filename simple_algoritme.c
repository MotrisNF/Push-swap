/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algoritme.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:53:44 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 23:31:52 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_simple_algoritme(size_t size, t_list **a, t_list **b)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		if (i + 1 == *(int *)(*a)->content)
		{
			ft_push_b(a, b);
			counter++;
			i++;
		}
		else
		{
			ft_rotate_a(a);
			counter++;
		}
	}
	i = 0;
	while (*b)
	{
		ft_push_a(a, b);
		counter++;
	}
	return (counter);
}
