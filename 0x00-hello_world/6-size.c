#include <stdio.h>
/**
 * main - A program that prints the size of various computer types 
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int d;
	long long int f;
	float j;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of an long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("size of an float: %lu byte(s)\n", (unsigned long)sizeof(j));
return (0);
}
