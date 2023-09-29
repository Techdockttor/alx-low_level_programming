#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return:
 * 0 if the system is big-endian.
 * 1 if the system is little-endian.
 */


int get_endianness(void)
{
	char *kytePtr;
	int balux = 1;

	kytePtr = (char *)&balux;

	return (*kytePtr);
}
