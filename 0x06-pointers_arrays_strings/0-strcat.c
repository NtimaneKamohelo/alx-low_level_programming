#include "main.h"

/**
 * _strcat - Concatenates the string pointed to.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int des_len;

while (dest[i++])
{
des_len++;
}
for (i = 0; src[i]; i++)
dest[des_len++] = src[i];
return (dest);
}
