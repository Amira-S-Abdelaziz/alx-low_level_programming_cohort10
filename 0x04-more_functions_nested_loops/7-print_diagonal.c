#include <stdio.h>
#include "main.h"

/**
*print_diagonal - check a char
*@n: integer
*
*Return: 0 or 2
*/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		for (b = a; b > 0; b--)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
