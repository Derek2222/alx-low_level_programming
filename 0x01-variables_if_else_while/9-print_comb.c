#include <stdio.h>

/**
 * main - print all base10 numbers comma seperated without printf
 *
 *
 *
 * Return: 0
 *
 */

int main(void)

{
	int i;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(44);
			putchar(32);
		}

	}
	putchar('\n');
	return (0);
}
