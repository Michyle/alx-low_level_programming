#include "search_algos.h"

/**
 * binary_search - this will call to binary_search to 
 * search for a value in a sorted array
 * @array: a pointer to the first element of the array to search for
 * @size: the size of the array
 * @value: the value to search for
 * Return: -1 if the value is not presnt of the array is NULL, 
 * Else return the index of the item
 *
 * description: print the sub array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[1] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
