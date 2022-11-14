#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Dog attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */

struct dog
{
	char *name
		float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_*/
