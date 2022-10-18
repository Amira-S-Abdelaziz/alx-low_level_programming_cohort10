/*
*file : 0-positive_or_negative.c
*Author:Amira
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*jack_bauer - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						_putchar('\n');
						return (void);
					}
				}
			}
		}
	}

}
