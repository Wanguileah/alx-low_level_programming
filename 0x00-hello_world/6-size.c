#include <stdio.h>
/**
 * main - Prints the size of various typesa based on the computer it is complied and run on..
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}

