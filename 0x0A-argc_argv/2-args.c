#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - funtion
 * @argc: unused variable
 * @argv: used variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
