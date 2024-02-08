#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - the singly linked list
 *
 * @n: an Integer
 * @index: an Index of the node in the list
 * @ext: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_S - A Singly linked list with an express lane
 *
 * @n: integer
 * @index: the Index of the node in the list
 * @next: a pointer to the next node
 * @express: a Pointer to the next node in the express lane
 *
 * Description: this is a singly linked list node structure with an expresss lane
 */
typedef struct skiplist_S
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_S *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
