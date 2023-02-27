#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable where its length is returned
 * Return: return the length of len.
 */

int _strlen(char *s)
{
int len = 0;
while (*s++)
{
len++;
}
return (len);
