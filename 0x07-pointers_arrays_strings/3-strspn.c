#include "main.h"
/**
*_strspn - function
*@s: var
*@accept: var
*Return: value
*/
unsigned int _strspn(char *s, char *accept)
{
	int mx = 0;
	int i = 0;
	int j = 0;

	for (; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				if (mx < (j + 1))
				{
					mx = j + 1;
				}
				break;
			}
		}
	}
	return (mx);
}
