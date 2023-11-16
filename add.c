#include "monty.h"

/**
 * _add - add the top two stacks;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int num1, num2;

	
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	else
	{
		num1 = head->n;
		num2 = head->next->n;
		head->next->n = num1 + num2;
		_pop(stack, line_number);
	}
}
