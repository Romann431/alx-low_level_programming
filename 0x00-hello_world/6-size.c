#include <stdio.h>

/**
*main -Entry
*Return: always 0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of char: %lu byte(s)", sizeof(a));
	printf("The size of int: %lu byte(s)", sizeof(b));
	printf("The size of long int: %lu byte(s)", sizeof(c));
	printf("The size of long long int: %lu byte(s)", sizeof(d));
	printf("The size of float: %lu byte(s)", sizeof(e));
	return (0);
}
