#include "monty.h"
/**
 * p_pall - prints all elements ofthe stack
 * @head: stack head
 * @line_number: line where instruction appears
 * Return: no return
*/
void p_pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		printf("\n");
	}
}
