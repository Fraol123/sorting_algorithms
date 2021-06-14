#include "sort.h"
/**
 *bubble_sort - a function that sorts with buble sort algo
 *@array: to be arranged
 *@size: number of elements
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, a;

	/*loop throug the array*/
	for (i = 0; i < size; ++i)
	{
		/*traverse to the next element*/
		for (j = i + 1; j < size; ++j)
		{
			if (array[i] > array[j])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
			}
			print_array(array, size);
		}
	}
}

