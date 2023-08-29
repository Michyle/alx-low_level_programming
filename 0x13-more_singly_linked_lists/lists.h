#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - This is a singly linked list
 * @n: This is an Integer
 * @next: This will point to the next node
 *
 * Desription: This is a node structure for a singly linked list
 * for an ALX project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
