#include "sort.h"

/**
 * quick_sort - sorts an array using the Quick sort algorithm
 * @array: the array to be sorted.
 * @size: the size of the array.
 *
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size <= 1)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * lomuto - Lomuto partition scheme
 *
 * @array: the array to be sorted
 * @start: the start of the partition
 * @end: the end of the partition
 *
 * Return: the last index being swaped
 */
size_t lomuto(int *array, size_t start, size_t end)
{
	int pivot = array[end];
	size_t index = start - 1;
	size_t i;

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			index++;
			swap(array, i, index);
		}
	}
	swap(array, end, index + 1);
	return (index + 1);
}

/**
 * quick_sort_helper - recursion part of quick sort
 *
 * @array: the array to be sorted
 * @low: the start of the partition
 * @high: the end of the partition
 * @size: the size of the array (const)
 *
 */
void quick_sort_helper(int *array, int low, int high, const size_t size)
{
	if (low < high)
	{
		size_t pi = lomuto(array, low, high);

		print_array(array, size);

		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, high, size);
	}
}
/**
 * swap - swaps two numbers in an array
 * @array: the array we want to swap in
 * @num1: first number
 * @num2: second number
 */

void swap(int *array, size_t num1, size_t num2)
{
	int temp;

	temp = array[num1];
	array[num1] = array[num2];
	array[num2] = temp;
}
