#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
*print_times_table- prints the type
*of the number
*@n: integer
*Return:  Always 0.
*
*/
void print_times_table(int n)
{
	char tr = ' ';
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j != 0)
			{
				if (k < 10)
					printf("%c%c%c", tr, tr, tr);
				else if (k < 100)
					printf("%c%c", tr, tr);
				else
					printf("%c", tr);
			}
			printf("%d", k);
			if (j != n)
				putchar(',');
			else
				putchar('\n');
		}
	}
}
