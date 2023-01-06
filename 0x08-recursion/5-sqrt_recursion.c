#include "main.h"
/**
 * check - checks for square root
 * @a: int
 * @b: int
 *
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*if n is negative*/
		return (-1);

	else
	{
		return (_evaluate(i, n)); /*Recursion call*/
	}
}
