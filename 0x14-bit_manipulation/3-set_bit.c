#include "main.h"

/**
 * set_bit - This will set a bit at a given index to 1
 * @n: This is a pointer to the number to change it
 * @index: The index of the bit is set to 1
 *
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
