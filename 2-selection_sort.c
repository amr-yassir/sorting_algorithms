#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of ints
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, k;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (array[i] > array[k])
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
