#include "monty.h"

/**
 * _push -  pushes an element to the stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/
void _push(stack_t **stack, unsigned int line_number)
{
	int idx;

	(void) stack;
	idx = 0;
	if (data.data != NULL)
	{
		while (data.data[idx])
		{
			if (data.data[idx] != 45 && (data.data[idx] < 48 || data.data[idx] > 57))
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				fclose(data.file);
				freelist();
				exit(EXIT_FAILURE);
			}
			idx++;
		}
	}
	else if (data.data == NULL || strcmp(data.data, "\n") == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		fclose(data.file);
		freelist();
		exit(EXIT_FAILURE);
	}
	if (data.swch == 0)
		_head(&data.stack);
	if (data.swch == 1)
		_tail(&data.stack);


}

/**
 * _head -  pushes an element to the head of the stack
 * @stack: stack head
 * Return: Nothing
*/

void _head(stack_t **stack)
{
	stack_t *tos;
	int n;

	tos = (stack_t *) malloc(sizeof(stack_t));
	if (!tos)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	n = atoi(data.data);

	tos->n = n;
	tos->prev = NULL;
	tos->next = (*stack);
	if ((*stack))
	{
		(*stack)->prev = tos;
	}
	*stack = tos;

}


/**
 * _tail -  pushes an element to the tail of the stack
 * @stack: stack head
 * Return: Nothing
*/

void _tail(stack_t **stack)
{
	stack_t *tail, *head;
	int n;

	tail = (stack_t *) malloc(sizeof(stack_t));
	if (!tail)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	n = atoi(data.data);
	head = *stack;
	tail->n = n;
	tail->next = NULL;
	tail->prev = NULL;

	if (!head)
	{
		*stack = tail;
		return;
	}
	while (head->next)
		head = head->next;
	tail->prev = head;
	head->next = tail;

}
