#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: Number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _btw, _checks;
	unsigned int alpha, zim;

	_checks = 1;
	_btw = n ^ m;
	alpha = 0;

	zim = 0;
	while (zim < (sizeof(unsigned long int) * 8))
	{
		if (_checks == (_btw & _checks))
			alpha++;
		_checks <<= 1;
		zim++;
	}
	return (alpha);
}
