#include "pushswap.h"

int     ft_check_order(t_list **stack, size_t size)
{
        size_t  i;
        t_list  *tmp;

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

void shuffle(int *arr, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

int main(void)
{
    int size = 100;
    int list[size];

    for (int i = 0; i < size; i++)
        list[i] = i + 1;

    shuffle(list, size);

    t_list *stack_a = ft_create_stack(list, size);
    t_list *stack_b = NULL;

    size_t total_moves = ft_simple_algoritme((size_t)ft_lstsize(stack_a), &stack_a, &stack_b);
	t_list *tmp = stack_a;
    while (tmp)
    {
        printf("%d\n", *(int *)(tmp->content));
        tmp = tmp->next;
    }
    ft_push_b(&stack_a, &stack_b);
    printf("\n%ld\n", total_moves);
	if (ft_check_order(&stack_a, size) && stack_b == NULL)
		printf("OK\n");
	else
		printf("KO\n");
    return (0);
}

