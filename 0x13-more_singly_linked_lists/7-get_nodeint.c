#include "lists.h"

/**
 * get_nodeint_at_index - This will return the node at a certain index
 * in the linked list
 * @head: This is the first node in the linked list
 * @index: This is the index of the node to return
 *
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
