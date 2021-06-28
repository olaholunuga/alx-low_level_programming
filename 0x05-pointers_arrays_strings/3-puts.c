#include "holberton.h"
/**
 * _puts - prints a string followed by  new line to stdout
 * @str: string to be rinted
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
