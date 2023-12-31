#include "monty.h"
/**
 * div_error - division error
 * Return: Nothing
 */
void div_error(void)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 * div_error_2 - div by 0 error
 * Return: Nothing
 */
void div_error_2(void)
{
	fprintf(stderr, "L%d: division by zero\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - error msg
 * Return: void
 */
void mul_error(void)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 * mod_error - modulus error
 * Return: Nothing
 */
void mod_error(void)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 * pchar_error_2 - pop error
 * Return: Nothing
 */
void pchar_error_2(void)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", info.line_number);
	exit(EXIT_FAILURE);
}
