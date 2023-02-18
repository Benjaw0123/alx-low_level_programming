#include <stdio.h>
#include <stdlib.h>
/**
  * main - returns alphabets both lower cases and upper cases
  *
  * Return: Always 0
  *
  */
int main(void)
{
	int ch = '0';
	int up = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (up <= 'f')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
