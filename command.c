#include "monty.h"
/**
 * push - pushes an element to stack
 * @stack: stack
 * @line_number: number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int i;
	char *value = strtok(NULL, " \n\t");
	stack_t *new_node;

	if (value == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	for (i = 0; value[i] != '\0'; i++)
	{
		if (value[i] < '0' || value[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(value);
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
/**
 * pall - print all values on stack
 * @stack: points to stack
 * @line_number: num
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
