#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - returns alphabets without q and e
 *
 * Return: 0
*/
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
