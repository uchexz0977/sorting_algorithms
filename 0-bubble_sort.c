#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble Sort algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, k;
int temp;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

/* Print the array after each swap */
for (k = 0; k < size; k++)
printf("%d ", array[k]);
printf("\n");
}
}
}
}

