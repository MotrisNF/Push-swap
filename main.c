#include "pushswap.h"

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
    int size = 500;
    int list[500];

    for (int i = 0; i < size; i++)
        list[i] = i + 1;

    shuffle(list, size);

    t_list *stack_a = ft_create_stack(list, size);
    t_list *stack_b = NULL;

    size_t total_moves = ft_simple_algoritme((size_t)ft_lstsize(stack_a), &stack_a, &stack_b);

    while (stack_a)
    {
        printf("%d\n", *(int *)(stack_a->content));
        stack_a = stack_a->next;
    }
    printf("\n%ld\n", total_moves);
    return (0);
}

