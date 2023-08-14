#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a character array representing the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to a character array representing the owner of the dog.
 *
 * Description: This structure represents a dog and contains information
 *              about its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
