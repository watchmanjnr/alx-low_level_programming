#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 *
 * Return: 0
*/
int main(void)
{
	int number;

	printf("Enter the number\n");

	scanf("%d", &n);

	if (number > 0)
		printf("%d is a positive n", n);
	else if (number < 0)
		printf("%d is a negative Number", n);
	else
		printf("%d is Zero", n);

	return (0);
}
