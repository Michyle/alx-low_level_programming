#include "lists.h"

/**
 * free_listint - This will fee a linked list
 * @head: frees listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

		while (head)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
}
