#include "lists.h"

/**
 * pop_listint - This will delete the head node of the linked list
 * @head: This is a pointer to the first element in the linked list
 *
 * Return: Data inside the elements that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
