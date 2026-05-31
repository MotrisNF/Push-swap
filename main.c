#include "pushswap.h"

int	main(void)
{
	int list[] = {1, 5, 7, 9, 6, 2, 8, 10, 3, 4};
	int size = 10;
	t_list	*stack_a = ft_create_stack(list, size);
	t_list	*stack_b = NULL;

	ft_simple_algoritme((size_t)ft_lstsize(stack_a), &stack_a, &stack_b);
	while (stack_a)
	{
		printf("%d\n", *(int *)(stack_a)->content);
		stack_a = stack_a->next;
	}
	return (0);
}

