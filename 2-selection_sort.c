#include "sort.h"
/**
 * selection_sort - sorting using selection algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * 
 * Return: Void.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int smallest;

	if (sizeof(array) <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < smallest)
			{
				smallest = array[j];
			}
		}
		for (j = i + 1; j < size; j++)
		{
			if (array[j] == smallest)
			{
				array[j] = array[i];
				array[i] = smallest;
				print_array(array, size);
				break;
			}
		}
	}
}