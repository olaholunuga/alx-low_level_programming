#include "holberton.h"
/**
 * swap_int - swaps the value of two variables
 * @*a: a pointer
 * @*b: a pointer
 * @a: a variable
 * @b: a variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
