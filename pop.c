#include "monty.h"
/**
 * f_pop - function that pops the top element of stack
 * @head: stack head
 * @line_number: where line appears
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file_p);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
