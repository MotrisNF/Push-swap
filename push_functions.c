/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 21:09:55 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/31 23:08:47 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_push_a(t_list **a, t_list **b)
{
	ft_push(a, b);
	printf("pa\n");
}

void	ft_push_b(t_list **a, t_list **b)
{
	ft_push(b, a);
	printf("pb\n");
}
