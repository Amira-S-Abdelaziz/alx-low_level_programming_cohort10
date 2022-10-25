#include "main.h"
/**
*puts_half - function
*@str: var
*/
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (i % 2 == 0)
		i = (len / 2);
	else
		i = (len / 2) + 1;
	for (; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
