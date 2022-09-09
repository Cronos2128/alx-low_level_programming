#include <stdio.h>

/**
 * main - entry point
 *
 * description : Write a program that prints the alphabet in lowercase
 *
 * return : 0
 */
 int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchr('\n');
	return (0);
}

