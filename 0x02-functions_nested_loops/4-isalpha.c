#include "holberton.h"
/**
 * isalpha - returns 1 if c is alphabet and 0 if otherwise
 *@c: integer to be tested
 *Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
