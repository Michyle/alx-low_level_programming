#include "main.h"

/**
 * get_endianness - This will check if a machine is big or little endian
 * Return: 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
