#include "monty.h"
/**
 * f_pint - prints the top element of stack
 * @head: stack head
 * @line_number: where instruction appears
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file_p);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
