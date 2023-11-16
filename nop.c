#include "monty.h"

/**
 * _nop - does nothing;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _nop(stack_t **stack, unsigned int line_number)
{
	if (data.data != NULL)
	{
		fprintf(stderr, "L%u: usage: nop\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	(void) stack;
	(void) line_number;
}

/**
 * freelist - free allocated memory when file closed
 * 
 * Return: nothing
*/
void freelist()
{
	stack_t *current = data.stack, *temp = NULL;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	data.stack = NULL;
}
