#include "holberton.h"
/**
* print_alphabet_x10 - loops over the alphabets 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
