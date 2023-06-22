#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @line_number:where line is found
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int line_number)
{
	stack_t *first;
	int len = 0, second;

	first = *head;
	while (first)
	{
		first = first->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(bus.file_p);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	first = *head;
	second = first->next->n * first->n;
	first->next->n = second;
	*head = first->next;
	free(first);
}
