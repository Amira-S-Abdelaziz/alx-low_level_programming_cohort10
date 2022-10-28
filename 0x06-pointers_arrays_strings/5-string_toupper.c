#include "main.h"
/**
*string_toupper - function
*@a: string
*Return: value
*/
char *string_toupper(char *a)
{
	int len = 0;
	int i = 0;

	while (*(a + len) != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
