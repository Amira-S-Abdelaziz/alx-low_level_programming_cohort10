#include "main.h"
/**
*cap_string - function
*@s: var
*Return: str
*/
char *cap_string(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			i++;
			continue;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' || s[i - 1] == '	' || s[i - 1] == '\n'
			|| s[i - 1] == ','
			|| s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?'
			|| s[i - 1] == '\"' || s[i - 1] == '('
			|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
