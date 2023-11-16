#include "monty.h"

/**
 * _pop - print the top element of the stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	(void) line_number;
	head = *stack;
	if (head)
	{
		*stack = head->next;
		free(head);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", data.line_number);
		exit(EXIT_FAILURE);
	}

}
