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
