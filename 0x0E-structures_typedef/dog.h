#ifndef STRTYP
#define STRTYP

/**
 *struct dog - structure of dog.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 */
struct dog
{
	char *name;
	float age;
	char name;
}

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d)
 *new_dog(char *name, float age, char *owner);
void free_dog(*d);
#endif /*STRTYP*/
