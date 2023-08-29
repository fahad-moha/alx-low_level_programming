#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A double pointer to the head of the listint_t list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 *
 * Description: Removes the head node of a linked list and returns its data.
 *              The head pointer is updated to point to the next node.
 *              If the linked list is empty, 0 is returned.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
