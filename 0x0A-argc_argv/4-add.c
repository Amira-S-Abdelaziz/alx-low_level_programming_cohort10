#include <stdio.h>
#include <stdlib.h>
/**
*main - function
*@argc: counter
*@argv: value
*Return: value
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
