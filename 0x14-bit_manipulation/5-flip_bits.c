#include <stdio.h>
#include "main.h"
/**
*flip_bits - function
*@n: variable
*@m: variable
*Return: value
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;

	for (i = 1; i <= 64; i++)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;

	}
	return (count);
}

