#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#define MAX_STACK_SIZE 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct settings - represents heap
 * @type: type of list or queue
 * @len: len of list
 * @line_number: line of exec command
 * @number_args: number of args after parsing
 * @_arguments: argument after parsing
 * @cpy_line: copy of line after getline
 * @_file: file executed
 * @buffer_line: line allocated by getline
 * @head_list: head of the list
 * @tail_list: tail of the list
 * @state: ether stack or queue
 * Description: doubly linked list node structure for
 *		stack, queues -- LIFO, FIFO
 */
typedef struct settings
{
	char *type;
	size_t len;
	unsigned int line_number;
	unsigned int number_args;
	char ***_arguments;
	char *cpy_line;
	FILE *_file;
	char *buffer_line;
	int state;/*0 for stack, 1 for queue*/
	stack_t **head_list, **tail_list;
} setting_t;

extern setting_t info;
setting_t info;
/*main functions*/
void free_stack(stack_t **stack);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void add(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void sub(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void _pchar(stack_t **head, unsigned int line_number);
void print_string(stack_t **head, unsigned int line_number);
void _rot(stack_t **head, unsigned int line_number);
/*nodes, insertion, delition, free*/
stack_t *add_dnodeint_end(stack_t **head, int n);
void *new_node(int n);
void free_dlistint(void);
/*ERROR*/
void add_error(void);
void file_error(char *file);
void unknown_ins(void);
void number_arguments_error(void);
void malloc_error(void);
void invalid(void);
void pint_error(void);
void pop_error(void);
/*some utility functions*/
char *ft_strdup(char *s);
int is_space(int c);
int is_empty(char *s);
/*helpers*/
int to_number(int *num);
int check_argument(char *op_code);
/*execute functions*/
void execute_line_(void);
void execute_file(void);
void initialize_heap(void);
/*memory_cleanup*/
void free_all(int a, int b, int c, int d, int e);
void fill_info(char ***, FILE **, char **, char **);
char **mall_c(int a);
void free_2_(char ***parsed_buff);
void free_(char **parsed_buff);
/*get_command_format*/
void (*get_format(char *formatz))(stack_t **, unsigned int);
void parser(char *buffer_line, char **pcs);
#endif /*_MONTY_H_*/
