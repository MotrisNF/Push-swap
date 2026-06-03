#include "pushswap.h"
#include <stdlib.h>
#include <time.h>

int     ft_check_order(t_list **stack)
{
        size_t  i;
        t_list  *tmp;

        i = 1;
        tmp = *stack;
        while (tmp)
        {
                if (*(int *)tmp->content != (int)i)
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
	srand(time(NULL));
    int size = 500;
    int list[size];

    for (int i = 0; i < size; i++)
        list[i] = i + 1;

    shuffle(list, size);
	t_moves	*move_set;
	move_set = malloc(sizeof(t_moves));
	move_set->pa = 0;
	move_set->pb = 0;
	move_set->sa = 0;
	move_set->sb = 0;
	move_set->ss = 0;
	move_set->ra = 0;
	move_set->rb = 0;
	move_set->rr = 0;
	move_set->rra = 0;
	move_set->rrb = 0;
	move_set->rrr = 0;

    t_list *stack_a = ft_create_stack(list, size);
    t_list *stack_b = NULL;
	int i = 0;
	while (i < size)
		printf("%d, ", list[i++]);

    ft_hard_algoritme(&stack_a, &stack_b, size, &move_set);
	t_list *tmp = stack_a;
    while (tmp)
    {
        printf("%d\n", *(int *)(tmp->content));
        tmp = tmp->next;
    }
    if (ft_check_order(&stack_a) && !stack_b)
	    printf("OK");
    else
	    printf("KO");
	int total = (move_set->pa + move_set->pb + move_set->sa + move_set->sb +
	move_set->ss + move_set->ra + move_set->rb + move_set->rr + move_set->rra +
	move_set->rrb + move_set->rrr);
	printf("\npa: %d | pb: %d | sa: %d | sb: %d | ss: %d | ra: %d | rb: %d | rr: %d | rra: %d | rrb: %d | rrr: %d\n",
	move_set->pa,
	move_set->pb,
	move_set->sa,
	move_set->sb,
	move_set->ss,
	move_set->ra,
	move_set->rb,
	move_set->rr,
	move_set->rra,
	move_set->rrb,
	move_set->rrr);
	free(move_set);
	ft_lstclear(&stack_a);
	free(stack_a);
	printf("\n%d\n", total);
	
    return (0);
}

