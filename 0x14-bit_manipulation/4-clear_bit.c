#include "main.h"

/**
 * clear_bit - This will set the value of a given bit to 0
 * @n: This is a pointer to the number to change it
 * @index: To clear the index of the bit
 *
 * Return: 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
