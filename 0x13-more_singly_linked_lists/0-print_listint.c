#include "lists.h"

/**
 * print_listint - This Function will print all the elements ofvthe linked list
 * @h: print linked list of type listint_t
 *
 * Return: This will Return the Number of Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while(h)
	{
		printf("%d/n",h->n);
		num++;
		h = h->next;
	}

	return (num);
}
