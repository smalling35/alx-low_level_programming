#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of array
* @a: array
* @n: number of elements
* Return: nothing
*/

void print_array(int *a int n)
{
	int c;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
	else
			printf("%d", a[inc]);
	}
	putchar(10);
}
