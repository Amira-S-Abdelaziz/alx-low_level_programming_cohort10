/*
*file : 1-last_digit.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints the last digit
*of the number if greater equal smaller than 5
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", n % 10);
	}
	else if (n % 10 < 6)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", n % 10);
	}

	return (0);
}
