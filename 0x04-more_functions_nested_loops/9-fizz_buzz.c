#include <stdio.h>

/**
*main - function
*Return: zero
*/

int main(void)
{
	int a = 1;

	for (; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
			putchar(' ');
	}
	putchar('\n');
}
