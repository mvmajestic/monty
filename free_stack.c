#include "monty.h"

/**
* free_stack - will free doubly linked list
* @head: head of stack
*/

void free_stack(stack_t *head)

{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
