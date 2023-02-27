#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: The value being swapped
 * @b: The value being swapped
 */

void swap_int(int *a, int *b)
{
int val = *a;
*a = *b;
*b = val;
}
