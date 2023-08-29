#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at the
 * specified index of a listint_t linked list.
 * @head: A double pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion is successful, or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int count;
	listint_t *prev;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;
	count = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
