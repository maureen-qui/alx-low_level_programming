#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: Length of argv
 * @argv: Number of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
/*Declaring variables*/
int position, total, change, aux;
int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

position = total = change = aux = 0;

if (argc != 2)
{
printf("Errror\n");
return (1);
}

total = atoi(argv[1]); /*Covert str to int*/

if (total <= 0)
{
printf("0\n");
return (0);
}
