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
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		Putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
