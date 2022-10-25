#include "main.h"
/**
*puts2 - function
*@str: var
*/
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
