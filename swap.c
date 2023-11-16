#include "monty.h"

/**
 * _swap - swap the top two stacks;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *head = *stack;

	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = head->n;
		head->n = head->next->n;
		head->next->n = temp;
	}
}
