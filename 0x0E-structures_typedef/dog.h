#ifndef DOG_H
#define DOG_H

/*
 * struct dog - named with elemnts below
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: defining a new type named Struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *my_dog - a typedef for struct dog
 *
 * Return: 0
*/
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

