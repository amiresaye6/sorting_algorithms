#include "sort.h"
/**
 * bubble_sort - sorting an array with bubble sort algorithm.
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swap;
	size_t i, j;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{

			if (array[j] > array[j + 1] && array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			return;
	}
}
