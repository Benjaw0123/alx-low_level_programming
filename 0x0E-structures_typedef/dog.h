#ifndef DOG_H
#define DOG_H

/*
 * main - Define a new type named struct dog with elemnts below
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Return: 0
 */
struct Dog
{
	char *name;
	float *age;
	char *owner;
};

int main(void)
{
	struct Dog dog;

	return (0);
}
