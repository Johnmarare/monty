#include "monty.h"
/**
 * get_format - returns text format
 * @formatz: bufffer formt
 * Return: Returns format, NULL if error
 */
void (*get_format(char *formatz))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"NULLo", NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (strcmp(formatz, opcodes_cases[i].opcode) == 0)
		{
			return (opcodes_cases[i].f);
		}
		i++;
	}
	return (NULL);
}
