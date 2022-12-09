#include <stdio.h>
/**
 * main - prints all single digits numbers of base 10
 * Description: Print all numbers of base 10, starting form 0.
 * Returns: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');

	return (0);
}
