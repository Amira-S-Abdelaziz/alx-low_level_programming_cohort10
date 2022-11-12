#include "main.h"
/**
*leet - function
*@s: var
*Return: value
*/
char *leet(char *s)
{
	int a[5] = {0, 1, 3, 4, 7};
	int cap[5] = {'O', 'L', 'E', 'A', 'T'};
	int sml[5] = {'o', 'l', 'e', 'a', 't'};
	int i = 0;
	int j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == cap[j] || s[i] == sml[j])
			{
				*(s + i) = a[j] + '0';
				break;
			}
		}
	}
	return (s);
}
