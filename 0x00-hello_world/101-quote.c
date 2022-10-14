/*
 * File: 4-puts.c
 * Auth: Amira
 */

#include <stdio.h>

/**
 * main - Prints "Programming is like building a multilingual
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-193";
	int a = 0;

	while (1)
	{
		if (arr[a] == '3')
			break;
		putchar(arr[a]);
		a++;
	}
	putchar('\n');

	return (1);
}
