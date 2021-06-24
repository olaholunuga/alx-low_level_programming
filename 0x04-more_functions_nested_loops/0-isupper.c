#include "holberton.h"
/**
 * _isupper - checks if c is uppercase
 * @c: integer to be tested
 * Return: 0 or 1
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
