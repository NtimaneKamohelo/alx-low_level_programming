#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else if (y % 2 == 0)
{
double temp = _pow_recursion(x, y / 2);
return (temp * temp);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
