#ifndef DOG_H
#define DOG_H

/*
 * main - Define a new type named struct dog with elemnts below
 * @name: first member
 * @age: second member
 * @owner: third member
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
