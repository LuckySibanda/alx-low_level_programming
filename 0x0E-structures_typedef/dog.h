#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: structure representing a dog with a name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
