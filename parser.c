#include "monty.h"
#define T_DELIMETERS "\t\n\v\f\r "
/**
 * parser - read line
 * @buffer_line: line
 * @pcs: storage for args
 * Return: void
 */
void parser(char *buffer_line, char **pcs)
{
	int i;
	char *piece;

	piece = strtok(buffer_line, T_DELIMETERS);
	i = 0;
	/*at max - 3 letters*/
	info.number_args = 0;
	while (piece != NULL && 1 < 2)
	{
		if (is_empty(buffer_line) == 0)
		{
			info.number_args++;
			/*space for string*/
			pcs[i] = ft_strdup(piece);
		}
		i++;
		piece = strtok(NULL, T_DELIMETERS);
	}
	pcs[i] = NULL;
}
