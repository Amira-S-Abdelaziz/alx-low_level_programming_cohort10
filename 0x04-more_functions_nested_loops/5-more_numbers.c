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
		for (; a <= '1'; a++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (a != '0')
					_putchar(a);
				_putchar(b);
				if (a == '1' && b == '4')
				{
					_putchar('\n');
					break;
				}
			}
		}
	}
}
