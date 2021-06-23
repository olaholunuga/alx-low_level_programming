#include "holberton.h"
/**
 *_abs - prints the absolute value of an int
 *
 *return 0
 */
int _abs(int r)
{
if (r <= 0)
{
r = (-1) * r;
_putchar(r);
} else if (r > 0)
{
_putchar(r);
}
return (0);
}
