#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A double pointer to the head of the listint_t list to be freed.
 *
 * Description: Frees each node of a linked list, releases the memory,
 *              and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
