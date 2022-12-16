#include <stdio>
#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	printf((n % 10) + '0');
	printf('\n');
}
