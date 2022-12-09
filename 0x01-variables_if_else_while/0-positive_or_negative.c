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

	scanf("%d", &number);

	if (number > 0)
		printf("%d is a positive Number", number);
	else if (number < 0)
		printf("%d is a negative Number", number);
	else
		printf("%d is Zero", number);

	return (0);
}
