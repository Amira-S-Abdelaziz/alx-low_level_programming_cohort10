#include "main.h"
#include <stdio.h>
/**
*rev_string - reverse
*@s: string
*/
void rev_string(char *s)
{
	char a[sizeof(s) + 1];
	int len = sizeof(s);
	int i = 0;

	while (len != -1)
	{
		a[i] = s[len];
		len--;
		i++;
	}
	len = 0;
	for (; len < i; len++)
	{
		*(s + len) = a[len];
	}
}
