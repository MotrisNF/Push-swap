/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algoritme.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:26:00 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/02 20:53:19 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_get_closet_sqrt(size_t nbr)
{
	size_t sqrt;

	if (nbr == 0)
		return (0);
	if (nbr == 1)
		return (1);
	sqrt = 1;
	while (sqrt < nbr / 2)
	{
		if (sqrt * sqrt == nbr)
			return (sqrt);
		sqrt++;
	}
	return (ft_get_closet_sqrt(nbr + 1));
}

int	ft_get_better_node(t_list **a, size_t size, size_t step, size_t chunk)
{
	int min = (step - 1) * chunk + 1;
	int max = step * chunk;
	t_list	*temp = *a;
	size_t counter = 1;
	size_t better_value = 0;
	size_t better_pos = size / 2;
	while (temp)
	{
		if (*(int *)temp-> content >= min && *(int *)temp-> content <= max)
		{
			if (counter < size / 2 && counter < better_pos)
			{
				better_pos = counter;
				better_value = *(int *)temp-> content;
			}
			else if (better_pos > size - counter)
			{
				better_pos = size - counter;
				better_value = *(int *)temp-> content;
			}
		}
		temp = temp->next;
		counter++;
	}
	return (better_value);
}

int	ft_get_up_down(t_list **a, int value, size_t size)
{
	int	counter = 1;
	t_list *temp = *a;

	while (temp)
	{
		if (*(int *)temp->content == value)
		{
			if (counter < size / 2)
				return (1);
			else
				return (0);
		}
		counter++;
		temp = temp->next;
	}
	return (1);
}

int	ft_get_position(t_list **list, size_t value)
{
	int	counter;
	t_list	*tmp;

	tmp = *list;
	counter = 1;
	while (value != *(int *)(tmp)->content)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}

int	ft_medium_algoritme(t_list **a, t_list **b, size_t size)
{
	size_t chunk = ft_get_closet_sqrt(size) + 1;
	size_t step = 1;
	size_t i;
	int	best_value;
	t_list *tmp;
	int	counter;

	counter = 0;
	i = 1;
	while (i <= size)
	{
		best_value = ft_get_better_node(a, size, step, chunk);
		if (best_value == 0)
		{
			if (step <= chunk)
			{
				step++;
				continue ;
			}
			else
			{
				ft_push_b(a, b);
				counter++;
			}
		}
		while (best_value != 0 && *(int *)(*a)->content != best_value)
		{
			if (ft_get_up_down(a, best_value, size - i))
			{
				ft_rotate_a(a);
				counter++;
			}
			else
			{
				ft_reverse_rotate_a(a);
				counter++;
			}
		}
		ft_push_b(a, b);
		counter++;
		i++;
	}
	i = ft_lstsize(*b);
	while (i > 0)
	{
		while (*(int *)(*b)->content != i)
		{
			if (ft_get_position(b, i) > ft_lstsize(*b) / 2)
			{
				ft_reverse_rotate_b(b);
				counter++;
			}
			else
			{
				ft_rotate_b(b);
				counter++;
			}
		}
		counter++;
		ft_push_a(a,b);
		i--;
	}
	return (counter);
}


