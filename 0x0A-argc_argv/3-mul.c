#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - funtion
 * @argc: used variable
 * @argv: unused variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, sum = 1;
if(argc > 1)
{
for(i = 1; i < argc; i++)
{
sum *= atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
