#include <stdio.h>

/**
*main - Entry
*Return: always 0
*/

int main(void)
{
printf("The size of a char: %lu byte\n", sizeof(char));
printf("The size of an int: %lu byte\n", sizeof(int));
printf("The size of a long int: %lu byte\n", sizeof(long int));
printf("The size  of a long long int: %lu byte\n", sizeof(long long int));
printf("The size of a float: %lu byte\n", sizeof(float));
return (0);

}
