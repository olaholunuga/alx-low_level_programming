#include "holberton.h"
/**
 * _abs - prints the absolute value of an int
 *
 * @r: the number to be computed
 *
 * Return: always 0
 */
int _abs(int r)
{
if (r <= 0)
{
r = (-1) * r;
return (r);
}
return (r);
}
