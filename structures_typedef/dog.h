#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - la structure du dog
 * @name: nom dog
 * @age: age dog
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
