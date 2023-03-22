#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: A pointer to the array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to execute on each element of the array
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

