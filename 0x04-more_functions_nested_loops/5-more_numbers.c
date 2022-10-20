#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - check a char
*
*Return: 0 or 2
*/
void print_most_numbers(void)
{
	char a = '0';
	char b = '0';

	for (; a <= '9'; a++)
	{
		_putchar(a);
	}
	a = '1'

		for (; b <= '4'; b++)
		{
			_putchar(a);
			_putchar(b);
		}

	_putchar('\n');

}
