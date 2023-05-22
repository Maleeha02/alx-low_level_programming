#ifndef DOG_H
#define DOG_H

/**
 * init_dog - Initializes a variable of struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
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

#endif /*DOG_H*/
