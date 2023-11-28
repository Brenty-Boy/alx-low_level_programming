#include "main.h"

/**
 * flip_bits - gets the number of bits to flip to get from 'n' to 'm'.
 * @n: the number.
 * @m: the number to flip 'n' to.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
