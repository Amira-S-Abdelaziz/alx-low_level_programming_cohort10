#include <stdio.h>
#include "main.h"

/**
* print_line - check a char
*@n: integer
*
*Return: 0 or 2
*/
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
