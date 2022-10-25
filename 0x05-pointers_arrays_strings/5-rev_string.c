#include "main.h"
/**
*rev_string - print
*@s: var
*/
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char a[10000];

	while (*(s + len) != '\0')
	{
		a[i] = *(s + len);
		i++;
		len++;
	}
	len--;
	i = 0;
	while (len != -1)
	{
		*(s + len) = a[i];
		i++;
		len--;
	}
}
