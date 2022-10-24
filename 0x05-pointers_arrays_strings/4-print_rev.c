#include "main.h"
/**
*print_rev - print
*@s: var
*/
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len != -1)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
