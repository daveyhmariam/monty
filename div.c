#include "monty.h"

/**
 * _div - divides the top two stacks;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp)
	{
		if (tmp->next == NULL)
		{
			fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
			fclose(data.file);
			exit(EXIT_FAILURE);
		}
	}
	if (tmp->n == 0)
	{
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	tmp->next->n /= tmp->n;
	*stack = tmp->next;
	free(tmp);

}
