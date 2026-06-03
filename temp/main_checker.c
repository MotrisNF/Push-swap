/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 02:47:17 by saperez-          #+#    #+#             */
/*   Updated: 2026/06/03 14:25:53 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_check_order(t_list **stack, size_t size)
{
	size_t	i;
	t_list	*tmp;

	i = 1;
	tmp = *stack;
	while (tmp)
	{
		if (*(int *)tmp->content != i)
			return (0);
		tmp = (tmp)->next;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*line;
	t_list	*stack_a;
	t_list	*stack_b;
	int		*numbers;
	size_t	size;

	numbers = ft_parser(argc, argv, &size);
	if (!numbers)
		return (1);
	stack_a = ft_create_stack(numbers, size);
	if (!stack_a)
		return (1);
	stack_b = NULL;
	while ((line = get_next_line(0)))
	{
		ft_checker_actuator(&stack_a, &stack_b, line);
		free(line);
	}
	if (ft_check_order(&stack_a, size) && stack_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
