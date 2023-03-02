#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;

while (start < end)
{
int temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
}
