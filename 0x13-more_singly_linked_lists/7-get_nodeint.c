#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 *
 * Description: Retrieves the node at the specified index in a linked list
 *              and returns a pointer to that node. The head pointer is used
 *              as the starting point. The index is zero-based, where 0
 *              corresponds to the first node, 1 to the second node, and so on.
 *              If the specified index is out of range (i.e., greater than or
 *              equal to the number of nodes in the list), NULL is returned.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
