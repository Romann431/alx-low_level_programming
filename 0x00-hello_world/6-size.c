#include <stdio.h>

/**
*main - Entry
*Return: always 0
*/

int main(void)
{
	printf("The size of a char: %i byte\n", sizeof(char));
	printf("The size of an int: %i byte\n", sizeof(int));
	printf("The size of a long int: %i byte\n", sizeof(long int));
	printf("The size  of a long long int: %i byte\n", sizeof(long long int));
	printf("The size of a float: %i byte\n", sizeof(float));
	return (0);
}
