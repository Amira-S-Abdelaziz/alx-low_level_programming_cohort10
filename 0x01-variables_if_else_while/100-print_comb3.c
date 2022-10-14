/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int main(void)
{
	int a = 48;
	int b;

	for (; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			if (a != b)
			{
				putchar((char)a);
				putchar((char)b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
