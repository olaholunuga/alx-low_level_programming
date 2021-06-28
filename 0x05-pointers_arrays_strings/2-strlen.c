#include "holberton.h"
/**
 * _strlen - function to calculate the lenght of string
 * @s: string
 * Return: lenth of string
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
length += 1;
s += 1;
}
return (length);
}
