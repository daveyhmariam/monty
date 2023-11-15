#include "monty.h"


/**
 * _pall - prints all the values on the stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	(void) line_number;
	head = *stack;
	while (head)
	{
		fprintf(stdout, "%d\n", head->n);
		head = head->next;
	}
}
