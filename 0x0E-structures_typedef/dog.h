#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - the information of a dog
 *
 * @name: The name of the dog
 *
 * @age: age of the dog
 *
 * @owner: dog owner
 *
 * Description: Create structure for dogs
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /*#ifndef DOG_H*/
