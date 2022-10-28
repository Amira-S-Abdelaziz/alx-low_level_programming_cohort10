#include "main.h"
/**
*reverse_array - function
*@a: array
*@n: size
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int b[1000000];

	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(a + i) = b[(n - 1 - i)];
		i++;
	}

}
