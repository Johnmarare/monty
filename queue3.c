#include "monty.h"
#include "stack.h"
#include "queue.h"
/**
 * q_print_string - q_print_all command
 * @head: head of the list
 * Return: nothing
 */
void q_print_string(stack_t **head)
{
	stack_t *h;

	for (h = *head; h != NULL; h = h->next)
		printf("%d\n", h->n);
}
