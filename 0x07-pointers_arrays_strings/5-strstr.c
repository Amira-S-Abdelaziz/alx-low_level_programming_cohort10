#include "main.h"
/**
*_strstr - function
*@haystack: var
*@needle: var
*Return: value
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int sz = 0;

	while (*(needle + sz) != '\0')
		sz++;
	for (; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0' && *(haystack + i + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
				continue;
			}
			else
				break;
		}
		if (sz == j)
			return (haystack + i);
	}
	return ('\0');
}
