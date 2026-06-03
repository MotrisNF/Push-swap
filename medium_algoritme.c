/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algoritme.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 21:52:52 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:34:39 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_get_closet_sqrt(size_t nbr)
{
	size_t	sqrt;

	if (nbr <= 1)
		return (nbr);
	sqrt = 1;
	while (sqrt * sqrt < nbr)
		sqrt++;
	return (sqrt);
}

int	ft_get_better_node(t_list **a, size_t size, size_t step, size_t chunk)
{
	t_list	*temp;
	size_t	cnt;
	size_t	b_pos;
	size_t	b_val;

	temp = *a;
	cnt = 1;
	b_val = 0;
	b_pos = size / 2;
	while (temp)
	{
		if (*(int *)temp->content >= (int)((step - 1) * chunk + 1)
			&& *(int *)temp->content <= (int)(step * chunk))
		{
			if ((cnt < size / 2 && cnt < b_pos) || (b_pos > size - cnt))
			{
				b_pos = (cnt < size / 2) * cnt
						+ (cnt >= size / 2) * (size - cnt);
				b_val = *(int *)temp->content;
			}
		}
		temp = temp->next;
		cnt++;
	}
	return (b_val);
}

int	ft_get_up_down(t_list **a, int value, size_t size)
{
	int		counter;
	t_list	*temp;

	counter = 1;
	temp = *a;
	while (temp)
	{
		if (*(int *)temp->content == value)
		{
			if (counter < (int)size / 2)
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
	int		counter;
	t_list	*tmp;

	tmp = *list;
	counter = 1;
	while ((int)value != *(int *)(tmp)->content)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}

static void	ft_rotate_and_push_b(t_list **a, t_list **b,
			int val, t_moves **move_set, size_t limit)
{
	while (*(int *)(*a)->content != val)
	{
		if (ft_get_up_down(a, val, limit))
			ft_rotate_a(a, move_set);
		else
			ft_reverse_rotate_a(a, move_set);
	}
	ft_push_b(a, b, move_set);
}

static void	ft_sort_back_to_a(t_list **a, t_list **b,
			t_moves **move_set)
{
	int	i;

	i = ft_lstsize(*b);
	while (i > 0)
	{
		while (*(int *)(*b)->content != i)
		{
			if (ft_get_position(b, i) > ft_lstsize(*b) / 2)
				ft_reverse_rotate_b(b, move_set);
			else
				ft_rotate_b(b, move_set);
		}
		ft_push_a(a, b, move_set);
		i--;
	}
}

void	ft_medium_algoritme(t_list **a, t_list **b,
			size_t size, t_moves **move_set)
{
	size_t	chunk;
	size_t	step;
	size_t	i;
	int		best_value;

	chunk = ft_get_closet_sqrt(size) * 2;
	step = 1;
	i = 1;
	while (i <= size)
	{
		best_value = ft_get_better_node(a, size, step, chunk);
		if (best_value == 0 && step <= chunk)
		{
			step++;
			continue ;
		}
		ft_rotate_and_push_b(a, b, best_value, move_set, size - i);
		i++;
	}
	ft_sort_back_to_a(a, b, move_set);
}
