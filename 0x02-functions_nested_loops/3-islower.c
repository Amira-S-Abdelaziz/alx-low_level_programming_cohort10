/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*_islower - prints the type
*of the number
*@c: an integer char
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
