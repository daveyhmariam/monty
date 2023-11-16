#include "monty.h"

/**
 * _pstr - string value of the entire stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	if (*stack != NULL)
	{
		while (current != NULL)
		{
			if ((current)->n > 0 && (current)->n < 255)
			printf("%c", (char)((current)->n));
			else
			break;
			current = current->next;
		}
		printf("\n");
	}
}
