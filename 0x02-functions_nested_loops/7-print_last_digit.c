#include "holberton.h"
/**
 * print_last_digit - prints the last digit of any number
 *
 * @r: integer
 *
 * Return: last digit
 */
int print_last_digit(int r)
{

int lastDigit;
lastDigit = r % 10;

if (lastDigit < 0)
{
_putchar(-lastDigit + 48);
return (-lastDigit);
}
else
{
_putchar(lastDigit + 48);
return (lastDigit);
}
}
