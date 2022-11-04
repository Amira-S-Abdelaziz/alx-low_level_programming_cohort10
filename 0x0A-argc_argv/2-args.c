#include <stdio.h>
/**
*main - function
*@argc: counter
*@argv: value
*Return: value
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
