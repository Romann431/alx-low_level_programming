#include <stdio.h>

/**
*main - Entry
*Return: always 0
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("The size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("The size of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("The size  of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);

}
