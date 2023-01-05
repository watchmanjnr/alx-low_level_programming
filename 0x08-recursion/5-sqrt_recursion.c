#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	else
		if (i * i < n)
			return (_evaluate(i + 1, n));

		else
			if (i * i == n) /*condition base*/
				return (i);

	return (-1);

	return (-1);
}
