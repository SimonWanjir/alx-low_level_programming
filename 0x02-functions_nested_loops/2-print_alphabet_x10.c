/*
 ** File: 1-alphabet.c
 ** Auth: simwanjir
 **/

#include "main.h"

/**
 ** print_alphabet_x10 - prints the alphabet 10 times
 **/
void print_alphabet_x10(void)
{
	int count = 0;
	char leta;

	while (count++ <= 9)
	{
		for (leta = 'a'; leta <= 'z'; leta++)
			_putchar(leta);
		_putchar('\n');
	}
}
