#include "monty.h"
/**
  *f_sub- subtracts top two element of stack
  *@head: stack head
  *@line_number: where the line appears
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int line_number)
{
	stack_t *first;
	int sus, nodes;

	first = *head;
	for (nodes = 0; first != NULL; nodes++)
		first = first->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file_p);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	first = *head;
	sus = first->next->n - first->n;
	first->next->n = sus;
	*head = first->next;
	free(first);
}
