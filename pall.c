#include "monty.h"

/**
 * f_pall - will print stack
 * @head: stack head
 * @counter: number used
 * Return: return nothing
*/

void f_pall(stack_t **head, unsigned int counter)

{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)

	return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

