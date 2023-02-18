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
	int ch = 'a';
	int up = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (up <= 'Z')
	{
		Putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
