#include "monty.h"

/**
 * invalid - aa
 * Return: void
 */
void invalid(void)
{
	fprintf(stderr, "L%d: usage: push integer\n", info.line_number);
	free_all(1, 1, 1, 1, 1);
	exit(EXIT_FAILURE);
}
/**
 * pint_error - pint error
 * Return: void
 */
void pint_error(void)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", info.line_number);
	exit(EXIT_FAILURE);
}
