#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * sort_array_check - checks for correct sorting
 * @array: The array to be checked
 * @size: Number of elements in @array
*/


void sort_array_check(const int *array, size_t size)
{
	size_t i, c = 0;

	for (i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			printf("error at index\n");
			c++;
		}
	}

	if (c == 0)
	{
		printf("array is sorted correctly :)\n");
	}
}
