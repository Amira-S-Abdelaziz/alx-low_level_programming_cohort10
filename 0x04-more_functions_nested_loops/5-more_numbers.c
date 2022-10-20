#include <stdio.h>
#include "main.h"

/**
* more_numbers - check a char
*
*Return: 0 or 2
*/
void more_numbers(void)
{
	char a = '0';
	char b = '0';
	int i = 0;

	for (; i < 10; i++)
	{
		a = '0';
		b = '0';
		for (; a <= '9'; a++)
		{
			_putchar(a);
		}
		a = '1';
		for (; b <= '4'; b++)
		{
			_putchar(a);
			_putchar(b);
		}
		_putchar('\n');
	}
}
