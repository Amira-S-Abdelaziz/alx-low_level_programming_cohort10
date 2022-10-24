#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - reverse
*@s: string
*/
void rev_string(char *s)
{
	int len = sizeof(s);
	char a[1000000];
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
