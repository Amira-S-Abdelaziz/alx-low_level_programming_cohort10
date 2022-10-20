#include <stdio.h>
#include "main.h"

/**
*print_square - check a char
*@size: integer
*
*Return: 0 or 2
*/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
