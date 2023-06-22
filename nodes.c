#include "monty.h"
/**
 * free_dlistint - free list
 * Return: void
 */
void free_dlistint(void)
{
	stack_t *temp, *head;

	temp = *info.head_list;
	head = *info.head_list;

	while (head && head->next)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
	head = NULL;
}
/**
 * new_node - creates a new node
 * @n: data
 * Return: new node
 */
void *new_node(int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free_all(1, 1, 1, 1, 1);
		malloc_error();
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
/**
 * add_dnodeint_end - add node to end of list
 * @head: head of the list
 * @n: data
 * Return: void
 */
stack_t *add_dnodeint_end(stack_t **head, int n)
{
	stack_t *new, *temp;

	new = new_node(n);
	temp = *info.head_list;
	if (*head == NULL)
	{
		*head = new;
		*info.tail_list = new;
		info.len++;
		return (new);
	}
	while (temp && temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	*info.tail_list = new;
	info.len++;
	return (new);
}
