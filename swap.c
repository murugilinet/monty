#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: stack head
 * @line_number: where the line appears
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0, second;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file_p);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	second = h->n;
	h->n = h->next->n;
	h->next->n = second;
}
