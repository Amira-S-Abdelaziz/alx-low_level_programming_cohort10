#include <stdio.h>
#include "main.h"

/**
*print_numbers - check a char
*
*Return: 0 or 2
*/
void print_numbers(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
