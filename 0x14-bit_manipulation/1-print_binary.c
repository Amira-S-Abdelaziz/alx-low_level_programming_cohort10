#include <stdio.h>
#include "main.h"
/**
*print_binary - function
*@n: variable
*/
void print_binary(unsigned long int n)
{
	unsigned long int x = n;
	unsigned long int k;
	int i = 0;
	int j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n != 0)
	{
		i++;
		n = n >> 1;
	}
	i--;
	while (i != -1)
	{
		j = i, k = x;
		while (j != 0)
		{
			k = k >> 1;
			j--;
		}
		if ((k & 1) == 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
