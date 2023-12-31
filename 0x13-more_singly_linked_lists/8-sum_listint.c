#include "lists.h"

/**
 * sum_listint - This will calculate the sum of all data in listint_t list
 * @head: This is the first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
