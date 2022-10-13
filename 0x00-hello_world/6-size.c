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
	int intType;
	float floatType;
	char charType;
	long int longType;
	long long int llType;

	printf("Size of a char: ", sizeof(intType));
	printf(" byte(s)");
	printf("\nSize of an int: ", sizeof(charType));
	printf(" byte(s)");
	printf("\nSize of a long int: ", sizeof(longType));
	printf(" byte(s)");
	printf("\nSize of a long long int: ", sizeof(llType));
	printf(" byte(s)");
	printf("\nSize of a float: ", sizeof(floatType));
	printf(" byte(s)");

	return (0);
}
