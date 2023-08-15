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

struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif /*#ifndef DOG_H*/
