/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*print_last_digit - prints the type
*of the number
*@n: an integer char
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int print_last_digit(int n)
{
	_putchar((_abs(n) % 10) + '0');
	return (n % 10);
}
