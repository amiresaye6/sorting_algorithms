#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
