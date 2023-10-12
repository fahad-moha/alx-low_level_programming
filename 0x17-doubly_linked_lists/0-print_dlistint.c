#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	count = 0;
	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
