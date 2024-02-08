#include "search_algos.h"

/**
 * linear_search - This searches for a value in an array of integers
 * using a Linera search algorithm
 * @array: input array
 * @size: the size of the array
 * @value: the value to search
 * Return: always EXIT_success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}