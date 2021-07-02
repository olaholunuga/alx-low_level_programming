#include "holberton.h"
/**
 * _strncat - function to concatenat4e two strings
 * @dest: a string
 * @src: a string
 * @n: an int
 * Return: char dest[i]
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0 ; src[j] != '\0'; j++)
{

if (j >= n)
break;

dest[i] =  src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
